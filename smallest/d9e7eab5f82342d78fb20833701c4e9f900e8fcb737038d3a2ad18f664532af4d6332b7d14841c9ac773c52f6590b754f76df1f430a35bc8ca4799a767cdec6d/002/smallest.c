/**/
#include <stdio.h>

int main(void)	{
    int one;
    int two;
    int three;
    int four;
    int small;
    int smaller;
    int smallest;
    printf("Please enter 4 numbers separated by spaces > ");
    scanf("%d %d %d %d",&one, &two, &three, &four);
    if (one <= two) 
       small = one;
    else 
       small = two;
    if (small <= three) 
       smaller = small;
    else
       smaller = three;
    if (smaller <= four) 
       smallest = smaller;
    else
       smallest = four;
    printf("%d is the smallest",smallest);
    return(0);
}
