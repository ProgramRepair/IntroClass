
#include <stdio.h>
#include <math.h>

int
main (void)

{
  char character;
  char remainder;
  int sum;
  printf("Enter an abitrarily long string, ending with carriage return > ");
  sum = 0;
  do
{
    scanf("%c", &character);
    sum = sum + (int)character;
    
}
  while(character != '\n');
  remainder = (char)(((sum - (int)'\n') % 64) + (int)' ');
 printf("Check sum is %c\n", remainder);
 return (0);
}
