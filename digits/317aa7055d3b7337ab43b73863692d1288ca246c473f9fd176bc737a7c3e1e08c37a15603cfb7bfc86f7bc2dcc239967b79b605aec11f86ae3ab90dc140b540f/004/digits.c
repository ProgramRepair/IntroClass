/**/

#include<stdio.h>
#include<math.h>

int main (void) {

  int integer, i, digit; 
  printf("\nEnter an integer > ");
  scanf("\n%d",&integer);
  digit=0;
  for (i=1; i <=10; i+=1) {
    digit=integer%10;
    
    if (integer == 0){
      printf("0\n");
      break;
    }
    else if (fabs(digit)<10) {
	digit=fabs(digit);
	printf("%d\n",digit);
    }

      integer=integer/10;

      if (fabs(integer)<10 && integer!=0){
	printf("%d\n",integer);
	break;
    }
   
  }

  printf("\nThat's all, have a nice day!\n");
  return (0);
}
