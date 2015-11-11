//

#include <stdio.h>
#include <math.h>

int main () {

	int integer;
	int mod;
	int flag = 0;

	printf("\n");
	printf("Enter an integer > ");
	scanf("%d", &integer);

	printf("\n");

	if (integer < 0) {
		integer = integer * (-1);
		
		flag = 1;

	}	

	while (integer >= 10) {

		mod = integer % 10;

		printf("%d\n", mod);

		integer /= 10;

	}
	
	if (flag) {
	
		integer = integer * -1;

	}
	printf("%d\n", integer);
	printf("That's all, have a nice day!\n");

	return(0);

}

