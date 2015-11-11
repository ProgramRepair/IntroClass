/**/

#include <stdio.h>
#include <string.h>

#define SIZE 20

void vowelcounter(const char s1[], int *syllp);

int main ()
{

    char s1[SIZE];
    int syll;
    
    printf("Please enter a string > ");
    fgets(s1, SIZE - 1, stdin);

    vowelcounter(s1, &syll);
    printf("The number of syllables is %d.\n", syll);

    return 0;
}

void vowelcounter(const char s1[], int *syllp)
{
    
    int i;

    for(i = 0, *syllp = 0;
        i < strlen(s1);
        ++i)
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'y')
            ++*syllp;
}


