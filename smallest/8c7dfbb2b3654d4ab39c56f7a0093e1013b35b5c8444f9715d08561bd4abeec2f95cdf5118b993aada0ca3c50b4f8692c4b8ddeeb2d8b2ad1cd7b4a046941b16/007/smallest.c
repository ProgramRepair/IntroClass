/**/

#include<stdio.h>
#include<math.h>

int main() {

	int a,b,c,d,e;

	printf("Please enter 4 numbers separated by spaces > ");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if (a<b && a<c && a<d)
		e=a;
	if (b<a && b<c && b<d)
		e=b;
	if (c<a && c<b && c<d)
		e=c;
	if (d<a && d<b && d<c)
		e=d;

	printf("%d is the smallest\n",e);

	return 0;
}
