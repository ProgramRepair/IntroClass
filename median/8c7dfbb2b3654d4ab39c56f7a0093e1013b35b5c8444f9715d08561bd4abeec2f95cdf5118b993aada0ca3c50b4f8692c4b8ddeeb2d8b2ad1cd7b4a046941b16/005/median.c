/**/

#include <stdio.h>
#include <math.h>

int main (void) {

	int a,b,c,d;
	printf("Please enter 3 numbers separated by spaces > ");
	scanf("%d%d%d",&a, &b, &c);

	if ((a<b && b<c) || (c<b && b<a))
		d=b;
	if ((c<a && a<b) || (b<a && a<c))
		d=a;
	if ((b<c && c<a) || (a<c && c<b))
		d=c;

	printf("%d is the median\n",d);

	return 0;
}
