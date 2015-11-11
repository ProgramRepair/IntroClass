/**/
#include <stdio.h>
#include <math.h>


int main(){

double A, B, C, D, studentscore;
char lettergrade;


printf("Enter thresholds for A, B, C, D in that order, decreasing percentages > Thank you. ");
scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
printf("Now enter student score (percent) > ");
scanf("%lf", &studentscore);
if(studentscore>=A)
{lettergrade='A';
printf("Student has an %c grade\n",lettergrade);
}
else if(studentscore>=B)
{
lettergrade='B';
printf("Student has an %c grade\n",lettergrade);
}
else if(studentscore>=C)
{
lettergrade='C';
printf("Student has an %c grade\n",lettergrade);
}
else if(studentscore>=D)
{lettergrade='D';
printf("Student has an %c grade\n",lettergrade);
}
else
printf("Student has failed the course\n");

return(0);



}
