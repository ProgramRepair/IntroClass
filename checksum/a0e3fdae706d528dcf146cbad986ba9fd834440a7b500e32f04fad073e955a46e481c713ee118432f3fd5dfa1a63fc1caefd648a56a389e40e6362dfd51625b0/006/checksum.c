//

#include <stdio.h>
#include <string.h>

int main () {

	int checksum, integer_value, sum = 0;
	char value[1000];

	printf("Enter an abitrarily long string, ending with carriage return > ");
	
	fgets(value, sizeof(value), stdin);

	
	int i;
	int stringlength = strlen(value) -1;
		
	
	for (i = 0; i < stringlength; i++) {
		integer_value = value[i];
		sum = sum + integer_value;
	}

	checksum = (sum%64) + ' ';

	printf("Check sum is %c\n", checksum);

	return(0);

}
