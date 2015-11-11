/**/

#include<stdio.h>

int
main(void)
{

int x,y, z;

//**/
printf("Please enter 3 numbers separated by spaces > ");
scanf("%d%d%d",&x,&y,&z);

if ((x>=y && x<=z) || (x<=y && x>=z))
printf("%d is the median\n",x);

else if ((y>=x && y<=z) || (y<=x && y>=z))
printf("%d is the median\n",y);

else
printf("%d is the median\n",z);

return(0);
}
