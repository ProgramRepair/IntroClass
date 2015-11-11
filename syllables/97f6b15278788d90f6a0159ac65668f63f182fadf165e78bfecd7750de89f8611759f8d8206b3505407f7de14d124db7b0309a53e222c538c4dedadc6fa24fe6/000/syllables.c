/**/
#include <stdio.h>
#include <string.h>
#define max 20
int main(){
	char str[max];
	int num = 0, i;

	printf("Please enter a string > ");
	fgets(str, max, stdin);
	for (i = 0; str[i] != '\0'; i++) {
		switch(str[i]){
			case 'a':
				num=num+1;
				break;
			case 'e':
				num=num+1;
				break;
			case 'i':
				num=num+1;
				break;
			case 'o':
				num=num+1;
				break;
			case 'u':
				num=num+1;
				break;
			default:
				num=num;
			}}
	printf("The number of syllables is %d.\n", num);
	return 0;
	}