/**/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

	int num;
	int temp;

	printf("Enter an integer > ");
	scanf("%d", &num);

	while (num <= 9999999999) {
		if (num <0){
			temp = num; }
		num = abs(num);
		printf("\n%d", num%10);
		num = num/10;
		if ((num < 10) && (num !=0) && (temp<0)) {
			printf("\n%d\nThat's all, have a nice day!\n", -num);
			break;
		}
		if (num == 0){
			printf("\nThat's all, have a nice day!\n");
			break;
		}
	}
	return(0);

}
