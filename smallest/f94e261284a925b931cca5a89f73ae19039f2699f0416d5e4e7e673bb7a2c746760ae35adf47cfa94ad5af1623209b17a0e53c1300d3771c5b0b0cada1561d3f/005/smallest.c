/**/
#include<stdio.h>

int
main(void)
{
	int n1,n2,n3,n4;
	printf("Please enter 4 numbers separated by spaces > ");
	scanf("%d%d%d%d", &n1,&n2,&n3,&n4);

	if( n1<=n2 && n1<=n3 && n1<= n4)
		printf("%d is the smallest\n",n1);
	else if( n2<=n1 && n2<=n3 && n2<=n4)
		printf("%d is the smallest\n",n2);
	else if( n4<=n1 && n4<=n2 && n4<=n3)
		printf("%d is the smallest\n",n4);
	else if( n3<=n1 && n3<=n2 && n3<= n4)
		printf("%d is the smallest\n",n3);
	return(0);
}
