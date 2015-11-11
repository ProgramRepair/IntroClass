/**/
#include <math.h>
#include <stdio.h>
int main () {
int num1, num2, num3, num4, smallest;
printf("Please enter 4 numbers separated by spaces > ");
scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
if (num1<num2 && num1<num3 && num1<num4)
	smallest = num1;
else if (num2<num1 && num2<num3 && num2<num4)
	smallest = num2;
else if (num3<num1 && num3<num2 && num3<num4)
	smallest = num3;
else if (num4<num1 && num4<num2 && num4<num3)
	smallest = num4;
printf("%d is the smallest\n", smallest);
return 0;
}
	