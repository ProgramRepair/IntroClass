/**/

#include <stdio.h>

int main(void)
{

int num, numl, n, d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, sign;

//**/
printf("\nEnter an integer > ");
scanf("%d",&num);

//**/
//**/
numl = num;
//**/
n = 0;

if (numl >= 0)
	{
	sign=1;
	while (numl > 0)
	
		{
		n+=1; //**/
		numl=numl/10; //**/
		}
	}

else
	{
	sign=0;
	while (numl < 0)
	
		{
		n+=1; //**/
		numl=numl/10; //**/
		}
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

if (sign == 1)
	{
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
	}

else
	{
	if (n > 9)
		{d0 = d0 * -1;
		d1 = d1 * -1;
		d2 = d2 * -1;
		d3 = d3 * -1;
		d4 = d4 * -1;
		d5 = d5 * -1;
		d6 = d6 * -1;
		d7 = d7 * -1;
		d8 = d8 * -1;
		}
	else if (n == 9)
		{d0 = d0 * -1;
		d1 = d1 * -1;
		d2 = d2 * -1;
		d3 = d3 * -1;
		d4 = d4 * -1;
		d5 = d5 * -1;
		d6 = d6 * -1;
		d7 = d7 * -1;
		}
	else if (n == 8)
		{d0 = d0 * -1;
		d1 = d1 * -1;
		d2 = d2 * -1;
		d3 = d3 * -1;
		d4 = d4 * -1;
		d5 = d5 * -1;
		d6 = d6 * -1;
		}
	else if (n == 7)
		{d0 = d0 * -1;
		d1 = d1 * -1;
		d2 = d2 * -1;
		d3 = d3 * -1;
		d4 = d4 * -1;
		d5 = d5 * -1;
		}
	else if (n == 6)
		{d0 = d0 * -1;
		d1 = d1 * -1;
		d2 = d2 * -1;
		d3 = d3 * -1;
		d4 = d4 * -1;
		}
	else if (n == 5)
		{d0 = d0 * -1;
		d1 = d1 * -1;
		d2 = d2 * -1;
		d3 = d3 * -1;
		}
	else if (n == 4)
		{d0 = d0 * -1;
		d1 = d1 * -1;
		d2 = d2 * -1;
		}
	else if (n == 3)
		{d0 = d0 * -1;
		d1 = d1 * -1;
		}
	else if (n == 2)
		{d0 = d0 * -1;
		}

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
	}
	
printf("That's all, have a nice day!\n");

return 0;
}
