/**/

#include <stdio.h>
#include <math.h>

int main () {

	int num;

	printf("Enter an integer > ");
	scanf("%d", &num);

	if (num == 0){
		printf("\n0\nThat's all, have a nice day!\n");
	
	}

	while  (num < 0){
		num = -num;
		printf("\n%d", num%10);
		num = num/10;
		if (num < 10) {
			printf("\n%dThat's all, have a nice day!\n", -num);
		}

	}
	while ((num <= 9999999999) && (num > 0)) {
		printf("\n%d", num%10);
		num = num/10;
		if (num == 0) {
			printf("\nThat's all, have a nice day!\n");
			break;
		}
		
	}
	return(0);

}
