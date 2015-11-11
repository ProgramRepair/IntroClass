//
//
//

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num, digit;

	printf("\nEnter an integer > ");
	scanf("%d", &num);

	digit = abs(num) % 10;


	//
	if (num < 0){
		num=abs(num);
	
		while(num != digit){
			digit = num % 10;
			
			if (num <= digit)
				printf("\n-%d", digit);
			else
				printf("\n%d", digit);

			//
			num = (num - digit) / 10;
			if (num == 0)
				break;
			if (num == digit)
				printf("\n-%d", num);
			//**/ 	
	
		}
}
	else if (num == 0){
		printf("\n0");	
	}
	else if (num >= 0){
		while(num != digit){
			digit = num % 10;
			//
			printf("\n%d", digit);
			num = (num - digit) / 10;
			if (num == 0)
				break;
			if (num == digit)
				printf("\n%d", num); 	

		}


	}

	printf("\nThat's all, have a nice day!\n");
return(0);
}
