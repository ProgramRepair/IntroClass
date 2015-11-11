/**/

#include <stdio.h>
#include <math.h>

int main () {

float A, B, C, D, Grade;

printf("Enter thresholds for A, B, C, D\nin that order, decreasing percentages > ");
scanf("%f %f %f %f", &A, &B, &C, &D);
printf("Thank you. Now enter student score (percent) >");
scanf("%f", &Grade);
if(Grade >= A)
printf("Student has an A grade\n");
else if(Grade >=B && Grade < A)
printf("Student has an B grade\n");
else if(Grade >=C && Grade < B)
printf("Student has an C grade\n");
else if(Grade < C && Grade >= D)
printf("Student has an D grade\n");
else if(Grade < D)
printf("Student has failed the course\n");

return (0);

}



