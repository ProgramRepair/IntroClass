//

#include<stdio.h>
#include<math.h>

int main ()
  {
    int in;

    printf("Enter an integer > ");
    scanf("%d",&in);

    if(in<0)
    {
      in = in*(-1);
    }

    while(in / 10 != 0)
    {
      printf("%d\n", in % 10);
      in = in / 10;
    }
    printf("%d\n", in);
    
    printf("That's all, have a nice day!");

    return 0;
  }
