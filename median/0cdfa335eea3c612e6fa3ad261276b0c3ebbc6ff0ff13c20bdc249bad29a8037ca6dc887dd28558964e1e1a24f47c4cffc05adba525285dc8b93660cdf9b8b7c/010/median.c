//
//
#include <stdio.h>

int main()
{
  int a, b, c, temp;

  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d%d%d", &a, &b, &c);

  if(a > b)
  {
    temp = b;
    b = a;
    a = temp;
//
  }
  if(b > c)
  {
    temp = c;
    c = b;
    b = temp;
//
  }
  if(a > b)
  {
    temp = b;
    b = a;
    a = temp;
//
  }

  printf("%d is the median\n", b);

  return 0;
}
