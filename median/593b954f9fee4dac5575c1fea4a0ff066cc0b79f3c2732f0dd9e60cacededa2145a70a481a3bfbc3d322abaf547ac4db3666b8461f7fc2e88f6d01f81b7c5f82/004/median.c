//
//
#include<stdio.h>

int main(void)
{
  int num1, num2, num3, median; //

  printf("Please enter 3 numbers separated by spaces > ");
  scanf("%d%d%d", &num1, &num2, &num3);

  if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
    median = num1;
  else if((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
    median = num2;
  else if((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2))
    median = num3;  //

  printf("%d is the median\n", median);  
  return(0);
} 
