/**/
//**/

#include <stdio.h>

int main() {

double a, b, c, d, m, n, p;

printf("Please enter 4 numbers separated by spaces > ");
scanf("%lf""%lf""%lf""%lf", &a, &b, &c, &d);

if (a > b)
m=b;
else if (a < b)
m=a;

if (m > c)
n=c;
else if (m < c)
n=m;

if (n > d)
p=d;
else if (n < d)
p=n;

printf("%.0f is the smallest\n", p);

return(0);

}
