/**/
//**/
//**/

#include <stdio.h>

int main(){

int N1, N2, N3, N4, Small;

//**/
printf("Please enter 4 numbers separated by spaces > ");
scanf("%d%d%d%d", &N1, &N2, &N3, &N4);

if (N1 < N2 && N1 < N3 && N1 < N4)
{
	Small = N1;
}

if (N2 < N1 && N2 < N3 && N2 < N4)
{
	Small = N2;
}

if (N3 < N1 && N3 < N2 && N3 < N4)
{
	Small = N3;
}

if (N4 < N1 && N4 < N2 && N4 < N3)
{
	Small = N4;
}

//**/
printf("%d is the smallest \n", Small);

return 0;
}
