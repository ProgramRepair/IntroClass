//
//

#include <stdio.h>

int main()
{
  int x, i, smallest, j, k, temp;
  int numbers[4];

  printf("Please enter 4 numbers separated by spaces > ");
  for(i = 0; i < 4; i++)
  {
    scanf("%d", &x);
    numbers[i] = x; 
  }
 
  for (k = 3; k > 0; k--)
  {
    for (j = 1; j <= k; j++)
    {
      if (numbers[j-1] > numbers[j])
      {
        temp = numbers[j-1];
        numbers[j-1] = numbers[j];
        numbers[j] = temp;
      }
    }
  }
  smallest = numbers[0];
  printf("%d is the smallest\n", smallest);
  return 0;
}
