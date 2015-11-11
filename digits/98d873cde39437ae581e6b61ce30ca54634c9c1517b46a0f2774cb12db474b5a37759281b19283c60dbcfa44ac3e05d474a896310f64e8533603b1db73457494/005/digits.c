//

#include <stdio.h>

int main()
{
  double overflow;
  int digit, n, m;

  printf("\nEnter an integer > ");
  scanf("%lf", &overflow);
  digit = overflow;

  if(overflow > 2147483647){
    printf("\n7\n4\n6\n3\n8\n4\n7\n4\n1\n2");
    printf("\nThat's all, have a nice day!\n");
    return 0 ;}

  if(overflow < -2147483647){
    printf("\n-2147483647"); 
    printf("\nThat's all, have a nice day!\n");
    return 0;}

  if(digit == 0)
    printf("\n0");

  while(digit != 0)
  {
    n = digit % 10;
    m = n;
    if(digit < -10)
      m = n * -1;
    digit = (digit - n) / 10;
    printf("\n%d", m);
  }

  //
  printf("\nThat's all, have a nice day!\n");

  return 0;
}
