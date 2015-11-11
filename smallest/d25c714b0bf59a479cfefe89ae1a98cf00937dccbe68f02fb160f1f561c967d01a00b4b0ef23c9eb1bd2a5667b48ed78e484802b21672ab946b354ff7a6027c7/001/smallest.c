/**/

#include <stdio.h>
#include <math.h>

int
main () {
int first, second, third, fourth, lowest;
printf("Please enter 4 numbers separated by spaces > ");
scanf("%d%d%d%d", &first, &second, &third, &fourth);

	if (first<second) { 
		lowest=first;	
	}else if (second<first) {
		lowest=second;	
	}
	if (third<lowest) {
		lowest=third;	
	}
	
	if(fourth<lowest) {
		lowest=fourth;
}


printf("%d is the smallest\n", lowest);

return (0);
}
