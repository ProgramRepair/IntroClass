//
#include <stdio.h>
#include <math.h>

int
main(void)
{
	int a, b, c, d;
	printf("Please enter 4 numbers separated by spaces > ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a>b)
		if (b>c)
			if (c>d)
			printf("%d is the smallest\n", d);
			else
			printf("%d is the smallest\n", c);
		else if  (b>d)
		printf("%d is the smallest\n", d);
		else
		printf("%d is the smallest\n", b);
	else if (a>c)
		if (d>c)
		printf("%d is the smallest\n", c);
		else
		printf("%d is the smallest\n", d);
	else if (a>d)
	printf("%d is the smallest\n", d);
	else
	printf("%d is the smallest\n", a);
return(0);
}
