#!/usr/bin/python3
import shutil
import tempfile
import argparse
import os
import re
import subprocess

# Copyright © 2016 Edward Smith <tedks@cs.umass.edu>
# 
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.


GP_PARAMS = {'sanity': 'no',
             'search': 'oracle',
             'fix-scheme': 'uniform',
             'fault-scheme': 'uniform',
             'pos-tests': 0,
             'neg-tests': 0,
             'oracle-genome': None,
             'program': None}

PROGRAMS = ['checksum', 'digits', 'grade', 'median', 'smallest', 'syllables']

def args_of_dict(d):
    args = []
    for (ck, cv) in d.items():
        if ck.startswith('-'):
            args.append(ck)
        else:
            args.append("--{}".format(ck))
        if cv is not None:
            args.append(str(cv))
    return args

def repatch(logfile, repair='repair', output='repair.c'):
    log = open(logfile)
    repair_line = None
    repair_regex = re.compile(r"Repair Found: ([adr\d\s,()]+\))")
    args = GP_PARAMS

    for line in log:
        if "Repair Found" in line: repair_line = line

    if repair_line is None:
        raise ValueError("Couldn't find repair in {}. ".format(logfile)
                         + "Does this file contain a repair?")
    match = repair_regex.search(repair_line)
    if match is None:
        raise ValueError("Couldn't find repair string in {}".format(logfile))
    args['oracle-genome'] = match.group(1)

    program = None
    for p in PROGRAMS:
        if p in logfile: program = p
    args['program'] = os.path.dirname(logfile) + os.path.sep + program + ".c"

    args = args_of_dict(args)

    # create a temp directory for GenProg. This is necessary because
    # otherwise GenProg will just write repair.c to CWD.
    with tempfile.TemporaryDirectory() as tmpdir:
        exit_code = subprocess.call([repair] + args, 
                                    stdout=subprocess.PIPE,
                                    cwd=tmpdir)
        if exit_code != 0: return exit_code

        shutil.move(tmpdir + os.path.sep + "repair.c", output)
        return exit_code
        

def main():
    parser = argparse.ArgumentParser("A tool to regenerate GenProg repairs from the GenProg log.",
                                     formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument("repair", help="The path to the GenProg repair executable")
    parser.add_argument("log", help="The log to regenerate the patch from")
    parser.add_argument("--output_file", '-o', help="Path to write the repaired program to.", 
                        default="repair.c")

    args = parser.parse_args()

    exit(repatch(os.path.abspath(args.log),
                 repair=os.path.abspath(args.repair),
                 output=args.output_file))

if __name__ == "__main__":
    main()