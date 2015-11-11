//

#include<stdio.h>
#include<string.h>

int main ()
{
  char inputString[20];
  int length, k, j, syl;
  char vowels[6];
  vowels[0] = 'a';
  vowels[1] = 'e';
  vowels[2] = 'i';
  vowels[3] = 'o';
  vowels[4] = 'u';
  vowels[5] = 'y';
  char temp;

  k = 0;
  j = 0;
  syl = 0;

  printf("Please enter a string > ");
  gets(inputString);

  length = strlen(inputString);

  for(k = 0; (k < length); k++)
  {
    temp = inputString[k];
    for(j = 0; (j < 5); j++)
    {
      if(temp == vowels[j])
      {
        syl = syl + 1;
        j = 5;
        //
      }
    } 
  }
printf("The number of syllables is %d.",syl);
return 0;
}
