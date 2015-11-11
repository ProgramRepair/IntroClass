/**/
#include <stdio.h>
#include <math.h>
int main()
{
	char stuff;
	int sum;
	int count=0;
	printf("Enter an abitrarily long string, ending with carriage return > ");
	scanf("%c",&stuff);//**/
	while(stuff>0) //**/
	{
	count++;
	sum+=(int)stuff%10; //**/
	stuff=stuff/10;//**/
	printf("are you stupid %d\n", count);
	printf("%d\n", (int) stuff);
	}
	sum=sum%64+ ' '; //**/
	printf("Check sum is %c\n", (char) sum); //**/	
	return 0;
}
