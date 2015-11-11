//

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,t,d;

	printf("\nEnter an integer > ");
	scanf("%d",&n);
	printf("\n");
	t=n;

if (n==0)
	printf("0\n");
else
while (n!=0){
	d=n%10;
	n=n/10;
	if((t<0) && (n==0))
		printf("-%d\n",abs(d));
	else printf("%d\n",abs(d));		}

	printf("That's all, have a nice day!\n");

return(0);

}
