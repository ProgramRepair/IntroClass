#!/usr/bin/python2

import os
import subprocess
import hashlib
import json

def hashfile(fname, blocksize=65536):
	"""return the md5 of the file"""
	hasher = hashlib.md5()
	afile = open(fname, 'rb')
	buf = afile.read(blocksize)
	while len(buf) > 0:
		hasher.update(buf)
		buf = afile.read(blocksize)
	return hasher.hexdigest()

# All programs of the dataset
projects =  ["checksum", "digits", "grade", "median", "smallest", "syllables"]

# ouput filename
defectDataFileName = "defect-metadata.json"
projectDataFileName = "program-metadata.json"

rootIntroclass = os.path.join(os.path.dirname(os.path.realpath(__file__)), "..")

classificationPath = os.path.join(rootIntroclass, "defect-classification.json")
classFile = open(classificationPath, "r+")
data = json.loads(classFile.read())
classFile.seek(0)

totalCountRevison = 0
totalCountRepo = 0
totalUnique = 0

uniqueFiles = {}
for project in projects:
	if project not in uniqueFiles:
		uniqueFiles[project] = {}

	countRevison = 0
	countRepo = 0

	pathProject = os.path.join(rootIntroclass, project)
	files = os.listdir(pathProject)
	for repo in files:
		# ignore tests folder
		if repo == "tests":
			continue
		pathUser = os.path.join(pathProject, repo)
		# ignore all files
		if not os.path.isdir(pathUser):
			continue

		countRepo += 1
		userFiles = os.listdir(pathUser)
		userFiles = sorted(userFiles, key=lambda revision: int(revision) if revision.isdigit() else revision)
		for revision in userFiles:
			if revision == "tests":
				continue
			pathVersion = os.path.join(pathUser, revision)
			if not os.path.isdir(pathVersion):
				continue
			pathProgram = os.path.join(pathVersion, project + ".c")
			if not os.path.isfile(pathProgram):
				continue
			countRevison += 1
			# ident the program	
			cmd = "indent %s" % pathProgram
			subprocess.call(cmd, shell=True)

			# md5 of the file
			md5 = hashfile(pathProgram)
			if md5 in uniqueFiles[project]:
				uniqueFiles[project][md5]["identics"] += [{
					"repo": repo,
					"revision": revision
				}]
			else:
				uniqueFiles[project][md5] = {
					"project": project,
					"repo": repo,
					"revision": revision,
					"identics": []
				}
	totalCountRevison += countRevison
	totalCountRepo += countRepo
	totalUnique += len(uniqueFiles[project])
	print "| %s  |      %d |                   %d |               %d |" % (
		project,
		countRepo,
		countRevison,
		len(uniqueFiles[project]))

print "| Total     |      %d |                   %d |               %d |" % (
		totalCountRepo,
		totalCountRevison,
		totalUnique)

for project in uniqueFiles:
	pathProject = os.path.join(rootIntroclass, project)
	outputProject = {
		"program": project,
		"nbUniqueDefects": len(uniqueFiles[project]),
		"uniqueDefects" : []
	}
	for md5 in uniqueFiles[project]:
		defect = uniqueFiles[project][md5]
		pathDefect = os.path.join(pathProject, defect["repo"],defect["revision"])
		outputProject["uniqueDefects"] += [{
			"repo": defect["repo"],
			"revision": defect["revision"]
		}]

		outputDefect = {
			"program": project,
			"repo": defect["repo"],
			"revision": defect["revision"],
			"nbIdenticalDefects": len(defect["identics"]),
			"identicalDefects" : defect["identics"]
		}
		for tmp in data:
			if tmp["repo"] != defect["repo"]:
				continue
			if tmp["program"] != project:
				continue
			revision = tmp["revision"].split("_")[0]
			if int(defect["revision"]) != int(revision):
				continue
			tmp['isReferenceDefect'] = True
			break

		for identic in defect["identics"]:
			pathIdentic = os.path.join(pathProject, identic["repo"], identic["revision"])
			pathIdenticJsonFile = os.path.join(pathIdentic, defectDataFileName)
			outputDefect["identicalDefects"] = [{
				"repo": defect["repo"],
				"revision": defect["revision"]
			}]
			outputDefect["identicalDefects"] += defect["identics"]
			outputDefect["identicalDefects"].remove(identic)

			jsonIdenticFile = open(pathIdenticJsonFile, "w")
			
			outputDefect["revision"] = identic["revision"]
			jsonIdenticData = json.dumps(outputDefect, indent=2, sort_keys=True)
			jsonIdenticFile.write(jsonIdenticData)
			outputDefect["revision"] = defect["revision"]
			for tmp in data:
				if tmp["program"] != project:
					continue
				if tmp["repo"] != identic["repo"]:
					continue
				revision = tmp["revision"].split("_")[0]
				if int(identic["revision"]) != int(revision):
					continue
				tmp['isReferenceDefect'] = False
				break
			pass
		outputDefect["identicalDefects"] = defect["identics"]

		pathDefectJsonFile = os.path.join(pathDefect, defectDataFileName)
		jsonDefectFile = open(pathDefectJsonFile, "w")
		jsonDefectData = json.dumps(outputDefect, indent=2, sort_keys=True)
		jsonDefectFile.write(jsonDefectData)
		pass
	pathJsonFile = os.path.join(pathProject, projectDataFileName)
	jsonFile = open(pathJsonFile, "w")
	jsonData = json.dumps(outputProject, indent=2, sort_keys=True)
	jsonFile.write(jsonData)


classFile.write(json.dumps(data, indent=2, sort_keys=True))
