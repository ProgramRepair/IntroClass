//

#include <stdio.h>
#include <math.h>

int main()
{
  int num1, num2, num3, num4, small;
  
  printf("Please enter 4 numbers separated by spaces > ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
  
  if(num1 < num2 && num1 < num3 && num1 < num4)
    small = num1;
  else if(num2 < num1 && num2 < num3 && num2 < num4)
    small = num2;
  else if(num3 < num1 && num3 < num2 && num3 < num4)
    small = num3;
  else if(num4 < num1 && num4 < num2 && num4 < num3)
    small = num4;

//**/
  
  printf("%d is the smallest\n", small);
  
  return 0;
}
