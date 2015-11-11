/**/

#include <stdio.h>
#include <math.h>

int main()
{

	int one, two, three, four;
	printf("Please enter 4 numbers separated by spaces > ");
	scanf("%d%d%d%d", &one, &two, &three, &four);
	if ((one < two)&&(two < three)&&(three < four))
		printf("%d is the smallest\n", one);
	if ((two < one)&&(one < three)&&(three < four))
		printf("%d is the smallest\n", two);
	if ((three < one)&&(one < two)&&(two < four))
		printf("%d is the smallest\n", three);
	if ((four < one)&&(one < two)&&(two < three))
		printf("%d is the smallest\n", four);
	return(0);
}		
