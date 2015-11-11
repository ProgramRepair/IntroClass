/**/

#include<stdio.h>
#include<math.h>


int main (void)
{
	char a[4095];
	int n =0, sum = 0, checksum;


n=0;

printf("Enter an abitrarily long string, ending with carriage return > ");
fgets(a,256, stdin);

while(a[n+1] != '\0')
{	
	sum += (int)(a[n]);
	n++;
}

checksum = (sum%64)+32;

printf("Check sum is %c\n", (char)checksum);

return(0);

}

