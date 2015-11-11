/**/


#include <stdio.h>
#include <math.h>

int main(void){

	
	int num,s; 
	
	s=0;
	
	printf("\nEnter an integer > ");
	scanf("%d",&num); 
	
	if (num == 0){
	printf("\n%d\nThat's all, have a nice day!\n", s);}

if(num>0){
	do{
		printf("\n%d", num % 10);
		num /=10;
	}while (num > 0);
	printf("\nThat's all, have a nice day!\n");
	}
	else if (num<0){
	do{
	
    if (num  <-10){
		printf("\n%d", (-1)*(num % 10));
		num /= 10;}
	else {
		printf("\n%d", num % 10);
		num /=10;
	}
	}

	while (num < 0);
	printf("\nThat's all, have a nice day!\n");
	}
	
	 
return(0);
}
