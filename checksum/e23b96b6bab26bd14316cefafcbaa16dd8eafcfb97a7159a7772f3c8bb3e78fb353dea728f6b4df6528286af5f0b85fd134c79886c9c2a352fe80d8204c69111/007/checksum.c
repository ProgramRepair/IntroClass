/**/

#include<stdio.h>

int main (){
	
	char letter; //
	int sum = 0; //
	printf("Enter an abitrarily long string, ending with carriage return > ");
	while(1){
		letter = getchar();//
		if (letter == '\n'){ //
			break;
		}
		else{
			sum+=(int)letter; //
		}
	}
	sum = (sum%64)+32; //
	char output = (char)sum; //
	printf("Check sum is %c\n", output); 
return 0;
}
