//

#include <stdio.h>

int main(){
int a, b, c, d, x;
printf("Please enter 4 numbers separated by spaces > ");
scanf("%d %d %d %d", &a, &b, &c, &d);
if (a>=b)
x = b;
else
x = a;
if (x>=c)
x = c;
if (x>=d)
x = d;
printf("%d is the smallest\n", x);
return 0;
}
