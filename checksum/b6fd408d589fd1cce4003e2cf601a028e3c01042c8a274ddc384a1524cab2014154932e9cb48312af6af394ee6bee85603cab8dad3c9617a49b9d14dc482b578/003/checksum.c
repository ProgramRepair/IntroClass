/**/
#include <stdio.h>
#include <math.h>
int main()
{
	char stuff;
	int sum=0;
	printf("Enter an abitrarily long string, ending with carriage return > ");
	scanf("%c", &stuff);//**/
	while(stuff!='\n') //**/
	{
	sum+=(int)stuff; //**/
	scanf("%c", &stuff);//**/
	}
	sum=sum%64+ (int)' '; //**/
	printf("Check sum is %c\n", (char) sum); //**/	
	return 0;
}
