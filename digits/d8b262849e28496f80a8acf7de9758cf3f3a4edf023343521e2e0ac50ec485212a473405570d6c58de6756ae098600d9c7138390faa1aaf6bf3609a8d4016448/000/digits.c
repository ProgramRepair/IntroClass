/**/


#include <stdio.h>
#include <math.h>

int main(void){

	
	int num; 
	
	printf("\nEnter an integer > ");
	scanf("%d",&num);  

	do{
		printf("\n%d", num % 10);
		num /=10;
	}while (num > 0);
	printf("\nThat's all, have a nice day!\n");
		
	 
return(0);
}
