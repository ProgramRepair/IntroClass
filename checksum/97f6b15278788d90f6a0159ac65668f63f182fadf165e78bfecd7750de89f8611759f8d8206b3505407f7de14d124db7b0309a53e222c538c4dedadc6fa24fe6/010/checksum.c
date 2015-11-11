/**/
#include <stdio.h>
#include <math.h>
int main(){
int a=0;
char c;
int sum; 
printf("Enter an abitrarily long string, ending with carriage return > ");
while (1) {
c = getchar();
if (c == '\n')
	break;
else{
	a += (int) c;
	}}
sum = a % 64 + 32;
sum = (char)sum;
printf("Check sum is %c\n", sum);
return 0;}

//**/
