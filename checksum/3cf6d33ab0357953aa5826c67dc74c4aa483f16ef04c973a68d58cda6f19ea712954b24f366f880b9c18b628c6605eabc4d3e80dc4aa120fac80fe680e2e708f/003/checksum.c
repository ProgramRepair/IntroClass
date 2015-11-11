/**/

#include <stdio.h>

int main () {

	char n;		//**/
	int total = 0;	//**/

	printf("Enter an abitrarily long string, ending with carriage return > ");

	while (n != '\n') {

		n = getchar();
		if (n == '\n') {
			break;
			}
		else {
			total += (int)n;
		}

	}

	total = (total % 64) + 32;
	char output = (char)total;

	printf("Check sum is %c\n", output);
	return 0;
}


