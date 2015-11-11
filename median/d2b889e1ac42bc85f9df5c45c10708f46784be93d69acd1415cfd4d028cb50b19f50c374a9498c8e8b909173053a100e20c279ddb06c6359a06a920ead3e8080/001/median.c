/**/
#include<stdio.h>

int main (){

int a,b,c;
        
printf("Please enter 3 numbers separated by spaces > ");
        
scanf("%d %d %d", &a, &b, &c);
        
if ((a <= b && b <= c) || (c <= b && b <= a)){
	printf("%d is the median\n", b);
        }
else if ((b <= c && c <= a) || (a <= c && c <= b)){
        printf("%d is the median\n", c);
        }
else if ((c <= a && a <= b) || (b <= a && a <= c)){ 
       printf("%d is the median\n", a);
        }
return 0;
}


