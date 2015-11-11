/**/

#include <stdio.h>
#include <math.h>

int main ()
{
    char orig; //
    int code, //
        accum; //
    char checksum; //

    printf("Enter an abitrarily long string, ending with carriage return > ");

    accum = 0;
    checksum = 0;
    code = 0;
    orig = ' ';

    do
    {
        scanf("%c", &orig);
        if(orig != '\n')
        {
            code = (int)orig;
            accum += code;
        }
    }
    while(orig != '\n');

    checksum = (char)((accum % 64) + 32);
   
    //

    //

    printf("Check sum is %c\n", checksum);

    return 0;
}
