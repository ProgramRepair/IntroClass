/**/

#include<stdio.h>
#include<math.h>

int main()
{
	int num1, num2, num3, num4, smallest;
	
	printf("Please enter 4 numbers seperated by spaces > ");
	scanf( "%d %d %d %d", &num1, &num2, &num3, &num4);

	if (num1 < num2){
		if (num1 < num3){
			if (num1 < num4){
				smallest = num1;
			}
		}

	}

        if (num2 < num1){
                if (num2 < num3){
                        if (num2 < num4){
                                smallest = num2;
                        }
                }

        }

        if (num3 < num1){
                if (num3 < num2){
                        if (num3 < num4){
                                smallest = num3;
                        }
                }

        }

        if (num4 < num1){
                if (num4 < num2){
                        if (num4 < num3){
                                smallest = num4;
                        }
                }

        }

	printf("%d is the smallest\n", smallest);
return 0;

}
