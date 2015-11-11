/**/
#include <stdio.h>
#include <math.h>
int main () {
float A, B, C, D, grade;
printf("Enter thresholds for A, B, C, D\n");
printf("in that order, decreasing percentages > ");
scanf("%f%f%f%f",&A,&B,&C,&D);
printf("Thank you. Now enter student score (percent) >");
scanf("%f",&grade);
if (grade < D)
	printf("Student has failed the course\n");
else if (grade < C)
	printf("Student has an D grade\n");
else if (grade < B)
	printf("Student has an C grade\n");
else if (grade < A)
	printf("Student has an B grade\n");
else
	printf("Student has an A grade\n");
return 0;
}
