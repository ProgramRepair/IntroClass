/**/

#include <stdio.h>
#include <math.h>

int main() {

	int a, b, c, d, smallest;
	
	printf("Please enter 4 number separated by spaces > ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a < b && a < c && a < d) 
			smallest = a;
	if (b < a && b < c && b < d) 
			smallest = b;
	if (c < b && c < a && c < d) 
			smallest = c;
	if (d < b && d < c && d < a) 
			smallest = d;
	printf("%d is the smallest\n", smallest);
	
	return 0;
	
}