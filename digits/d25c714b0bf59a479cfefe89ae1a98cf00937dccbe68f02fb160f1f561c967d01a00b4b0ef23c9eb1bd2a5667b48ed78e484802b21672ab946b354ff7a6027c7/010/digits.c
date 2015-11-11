/**/

//**/
//**/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n, digit;

printf("Enter an integer > ");
scanf("%d", &n);

	if (n==0){
        printf("\n0");
	printf("\nThat's all, have a nice day!\n");
	return(0);
	}

	while (abs(n)>0){
		if (n>0){
		digit = n % 10;
		printf("\n%d", digit);
		n= n/10.0;
		}
		else if(n<0 && (n/10.0)<(-1.0)){
                digit = abs(n % 10);
                printf("\n%d", digit);
                n= n/10.0;
                }
		else if(n<0 && (n/10.0)> (-1.0)){
                digit = n % 10;
                printf("\n%d", digit);
                n= (n)/10.0;
		}
	}

//**/

printf("\nThat's all, have a nice day!\n");
return (0);
}
