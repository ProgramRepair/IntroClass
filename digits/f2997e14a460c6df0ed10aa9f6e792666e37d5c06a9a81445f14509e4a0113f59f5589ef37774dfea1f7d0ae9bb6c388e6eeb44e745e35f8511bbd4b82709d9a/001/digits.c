/**/

#include <stdio.h>
#include <math.h>

int main () {

  int digit, input;

  printf("\nEnter an integer > ");
  scanf("%d", &input);

  printf("\n");

  while (1) {
    digit = input % 10;

    if (input == 0){
      printf("0\n");
      break;
    }

    else if (fabs(digit) < 10) {
      printf("%d\n",digit);
    }

    input = input/10;

    if (fabs(input) < 10 && input != 0) {
      printf("%d\n",input);
      break;
    }
  }

  printf("That's all, have a nice day!\n");

  return 0;

}
