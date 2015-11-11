/**/

#include <stdio.h>

int main()
{
	int num = 0, rem = 0, count = 1;
	char sign = '\0';
	printf("\nEnter an integer > \n");
	scanf("%d", &num);
	if(num < 0) {
		sign = '-';
		num = num * (-1);
	}
	while(count <= 10 && num != 0)
	{
		rem = num % 10;
		num = num - rem;
		num = num / 10;
		count++;
		if(num == 0&& sign != '\0') {
			printf("%c%d\n",sign,rem);
		}
		else {
			printf("%d\n", rem);
		}
	}	
	if(num == 0 && count == 1){	
		printf("%d\n", num);
	}
	
	printf("That's all, have a nice day!\n");
	
	return(0);
}
	
