//

#include <stdio.h>
#include <math.h>

int main()
{
  int a,b,c,z;

  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d%d%d", &a,&b,&c);

  if((b < a && a < c) || (c < a && a< b) || a == b)
    z = a;
  else if((a < b && b< c) || (c < b && b < a) || b == c)
    z = b;
  else if((a < c && c < b) || (b < c && c < a) || a == c)
    z = c; 
  
  printf("%d is the median\n", z);

  return 0;
}
