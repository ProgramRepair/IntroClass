//

#include <stdio.h>
#include <stdlib.h>

	int main() {
	int n;
	int digits;
  
	printf("\nEnter an integer > ");
	
	scanf("%d", &n);
	printf("\n");
	digits = 1;
  
	if (n == 0)
		printf("0\n");
		
	while (n > 0) {
		digits = n % 10;
		printf("%d\n", digits);
		n = (n - digits) /10;
    }
	
	
	printf("That's all, have a nice day!\n");
  
	return 0;
  
  }