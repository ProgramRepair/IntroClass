/**/

#include <stdio.h>

int
main(void)
{

	int A, B, C;
	printf("Please enter 3 numbers separated by spaces > ");
	scanf("%d%d%d", &A, &B, &C);
	if (A == B && A ==C)
		printf("%d is the median\n", A);
	else if ( A > B && A < C)
		printf("%d is the median\n", A);
	else if ( A > C && A < B)
		printf("%d is the median\n", A);
	else if ( B > C && B < A)
		printf("%d is the median\n", B);
	else if ( B > A && B < C)
		printf("%d is the median\n", B);
	else if ( C > A && C < B)
		printf("%d is the median\n", C);
	else if ( C > B && C < A)
		printf("%d is the median\n", C);
	else if ( A == B )
		printf("%d is the median\n", B);
	else if ( A == C )
		printf("%d is the median\n", C);
	else if ( C == B)
		printf("%d is the median\n", C);
return(0);
}
