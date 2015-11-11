/**/
#include <stdio.h>

int main(void)
{

int num, numl, n, d0, d1, d2, d3, d4, d5, d6, d7, d8, d9;

//**/
printf("\nEnter an integer > ");
scanf("%d",&num);

//**/
//**/
numl = num;
//**/
n = 0;

while (numl > 0)
	
	{
	n+=1; //**/
	numl=numl/10; //**/
	}

//**/

d0 = num%10;
num = (num - d0) / 10;

//**/

d1 = num%10;
num = (num - d1) / 10;

//**/

d2 = num%10;
num = (num - d2) / 10;

//**/

d3 = num%10;
num = (num - d3) / 10;

//**/

d4 = num%10;
num = (num - d4) / 10;

//**/

d5 = num%10;
num = (num - d5) / 10;

//**/

d6 = num%10;
num = (num - d6) / 10;

//**/

d7 = num%10;
num = (num - d7) / 10;

//**/

d8 = num%10;
num = (num - d8) / 10;

//**/

d9 = num%10;
num = (num - d9) / 10;

printf("\n%d\n",d0);

if (n > 1) printf("%d\n",d1);

if (n > 2) printf("%d\n",d2);

if (n > 3) printf("%d\n",d3);

if (n > 4) printf("%d\n",d4);

if (n > 5) printf("%d\n",d5);

if (n > 6) printf("%d\n",d6);

if (n > 7) printf("%d\n",d7);

if (n > 8) printf("%d\n",d8);

if (n > 9) printf("%d\n",d9);

printf("That's all, have a nice day!\n");

return 0;
}
