/**/
#include <stdio.h>
#include <math.h>

int main () {
   
   int n;
   int rem;
   
   printf("\nEnter an integer > ");
   scanf("%d", &n);

   while (n >= 10) {
	
	rem = n % 10;
        n = n / 10;
        printf("\n%d", rem);
   }
  
   rem = n % 10;
   printf("\n%d", rem);
   printf("\nThat's all, have a nice day!");
   return 0;
}	
