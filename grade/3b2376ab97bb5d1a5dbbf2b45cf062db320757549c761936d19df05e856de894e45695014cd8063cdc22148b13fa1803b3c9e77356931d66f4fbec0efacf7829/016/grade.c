/**/

#include <stdio.h>

int main(){
	
	float A, B, C, D, grade;

	printf("Enter thresholds for A, B, C, D\nin that order, decreasing percentages > ");
	scanf("%f%f%f%f", &A, &B, &C, &D);
	printf("Thank you. Now enter student score (percent) >");
	scanf("%f", &grade);

	if (grade >=  A)
		printf("Student has an A grade");

	else if (A > grade && grade >= B)
		printf("Student has an B grade");

	else if (B > grade && grade >= C)
		printf("Student has an C grade");
	
	else if (C > grade && grade >= D)
		printf("Student has an D grade");
	
	else
		printf("Student has failed the course");
	
	printf("\n");

	return 0;
}
