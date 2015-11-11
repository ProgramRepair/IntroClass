//

#include<stdio.h>
#include<string.h>

int main(){
	char str[20];
	int i,count;
	printf("Please enter a string > ");
	gets(str);
	i = 0;
	count=0; 
	while (i<strlen(str)){
		if (str[i]== 'a' ||  str[i]=='e' ||  str[i]=='i' || str[i]=='o' ||str[i]=='u' || str[i]=='y'){
			++count;
		}
	i=i+1;	 
	}
	printf("The number of syllables is %d.\n",count);
	return (0);
}

