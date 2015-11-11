/**/

#include <stdio.h>

int main()
{
	int num, rem = 0, count = 1;
	
	printf("Enter an integer > ");
	scanf("%d", &num);
	printf("The digits for the %d are: \n", num);
	while( count <= 10 && num > 0)
	{
		rem = num % 10;
		num = num - rem;
		num = num / 10;
		count++;
		printf("%d\n", rem);
	} 
	if(num <= 0 && count == 1){	
		printf("%d\n", num);
	} 
	
	return(0);		
}
	
