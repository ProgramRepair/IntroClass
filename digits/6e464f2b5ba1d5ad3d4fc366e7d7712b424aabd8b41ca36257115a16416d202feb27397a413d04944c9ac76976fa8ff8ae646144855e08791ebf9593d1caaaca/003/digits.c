//

#include <stdio.h>
#include <math.h>

int main(void){

	int n,i,j;

	printf("\nEnter an integer > ");
	scanf("%i",&n);
	printf("\n");
	i=n;

if (n==0)
	printf("%i\n",n);

if (n<-2147483647)
        printf("%i\n",i);

while (i!=0){
	j=i%10;
	i=i/10;
	if(n<0 && n==0)
		printf("%i\n",-j);
	else printf("%i\n",j);		}

	printf("That's all, have a nice day!\n");

return(0);

}
