//
//
#include <stdio.h>

int main()
{
  int a, b, c, median;

  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d%d%d", &a, &b, &c);

  if((a >= b && a <= c) || (a >= c && a <= b))
    median = a;
  if((b >= a && b <= c) || (b >= c && b <= a))
    median = b;
  else
    median = c;

  printf("%d is the median\n", median);

  return 0;
}
