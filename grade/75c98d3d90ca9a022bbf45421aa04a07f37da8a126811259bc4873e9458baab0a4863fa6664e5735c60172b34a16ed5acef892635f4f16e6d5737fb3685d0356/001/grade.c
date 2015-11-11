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
if (grade < 60)
	printf("Student has failed the course\n");
else if (grade < 70)
	printf("Student has an D grade\n");
else if (grade < 80)
	printf("Student has an C grade\n");
else if (grade < 90)
	printf("Student has an B grade\n");
else
	printf("Student has an A grade\n");
return 0;
}
