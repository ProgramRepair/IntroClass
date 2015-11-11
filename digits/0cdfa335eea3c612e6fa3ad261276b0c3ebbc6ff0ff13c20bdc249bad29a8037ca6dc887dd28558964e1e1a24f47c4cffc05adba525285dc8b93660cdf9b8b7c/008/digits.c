//
//
#include <stdio.h>
#include <math.h>

int main()
{
  int n, temp, digit;

  printf("\nEnter an integer > ");
  scanf("%d", &n);
  printf("\n");

//
  do
  {
    digit = n % 10;
    n = n / 10;
    if(n == 0)
      printf("%d\n", digit);
    else
      printf("%d\n", abs(digit));
  }while(n != 0);
  printf("That's all, have a nice day!\n");

  return 0;
}
