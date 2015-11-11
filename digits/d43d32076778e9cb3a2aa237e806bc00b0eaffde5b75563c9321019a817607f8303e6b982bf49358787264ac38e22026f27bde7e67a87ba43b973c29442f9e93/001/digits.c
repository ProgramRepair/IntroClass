/**/

#include <stdio.h>
#include <math.h>

int
main(void)
{
    int input, digits;

    //**/
    printf("Enter an integer > ");
    scanf("%d", &input);

    //**/
    if (input < 0){
        input = abs(input);
        while (input / 10 != 0) {
            digits = input % 10;
            printf("\n%d", digits);
            input = input / 10;
            if (input <= 9){
                input = (-1) * input;
            }
        }
    } else{
        while (input / 10 != 0) {
            digits = input % 10;
            printf("\n%d", digits);
            input = input / 10;
        }
    }

    //**/
    printf("\n%d\nThat's all, have a nice day!", input);

    //**/
    return(0);
}
