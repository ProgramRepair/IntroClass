/**/

#include <stdio.h>

int
main(void)
{
    int input, a, checksum;

    printf("Enter an abitrarily long string, ending with carriage return > ");
    scanf("%c", &input);

    a = 0;
    do {
        input = (int)input + (int)a;
        scanf("%c", &a);
    } while (a != '\n');

    checksum = ((int)input % 64) + (int)' ';

    printf("Check sum is %c\n", (char)checksum);

    return(0);
}
