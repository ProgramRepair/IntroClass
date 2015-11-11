//

#include <stdio.h>
#include <math.h>

int main()
{
  int add, sum, final;
  sum = 0;
  printf("Enter an abitrarily long string, ending with carriage return > ");
  while(add != '\n')
  {
    add = getchar(); 
    if(add != '\n') 
      sum = add + sum; 
  }
  //
  final = (sum % 64) + 32;
  printf("Check sum is ");
  putchar(final);
  printf("\n");
  return 0;
}
