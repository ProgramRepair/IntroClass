/**/

#include<stdio.h>
#include<math.h>

int main()
{

	int num1, num2, num3, num4, smallest;

	printf(" Please enter 4 numbers separated by spaces > ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	if (num1<= num2){
		smallest = num1;
	} else {
		 smallest = num2;
	 }
	
	if (num3 <= smallest){
		smallest = num3;
	}

	if (num4 <= smallest){
		smallest = num4;
	}

	printf("%d is the smallest\n", smallest);
return 0;
}
