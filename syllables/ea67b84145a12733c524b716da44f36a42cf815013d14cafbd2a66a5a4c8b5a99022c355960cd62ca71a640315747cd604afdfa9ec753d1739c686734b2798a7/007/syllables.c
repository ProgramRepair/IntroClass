/**/

#include<string.h>
#include<stdio.h>

int main () 
{
	char ch[21];
	int k,syll;
	printf("Please enter a string > ");
	fgets(ch,20,stdin);
	syll=0;
	for (k=0;k<(strlen(ch)+1);k++)
	{
		if (ch[k]=='a'||ch[k]=='e'||ch[k]=='i'||ch[k]=='o'||ch[k]=='u'||ch[k]=='y')
		{
			syll=syll+1;
		}
	}
	printf("The number of syllables is %d.\n",syll);
	
	return 0;
}
