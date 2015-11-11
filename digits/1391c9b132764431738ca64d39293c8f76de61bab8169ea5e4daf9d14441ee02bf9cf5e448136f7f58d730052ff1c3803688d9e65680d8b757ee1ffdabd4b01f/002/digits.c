/**/
//**/

#include <stdio.h>


int main(){

int Num, X, NewNum;
//**/
printf("Please enter a number > ");
scanf("%d", &Num);

//**/
if (Num == 0){printf("0\n");}

while (Num > 0)
{
X = Num % 10;
printf("%d\n", X);
NewNum = (Num - X)/10;
Num = NewNum;
}

while (Num < 0)
{
X = Num % 10;
NewNum = (Num - X)/10;

if (X<0){printf("%d\n", (X*-1));}

if (Num < 0 && Num > -10){printf("%d\n", X);}
Num = NewNum;

}


printf("That's all, have a nice day!\n");
return 0;
}
