/**/
#include <stdio.h>
int main()
  {
    int a,b,c,median;
    printf("Enter first integer > ");
    scanf ("%d", &a);
    printf("Enter second integer > ");
    scanf ("%d", &b);
    printf("Enter third integer > ");
    scanf ("%d", &c);
    if ((a>=b && b>=c)||(a<=b && b<=c))
       printf("%d is the median\n", b);
    else if ((b>=a && a>=c)||(c<=a && a<=b))
       printf("%d is the median\n", a);
    else if ((a>=c && c>=b)||(a<=c && c<=b))
       printf("%d is the median\n", c);
    else
       return 1;
    return 0;
  }
