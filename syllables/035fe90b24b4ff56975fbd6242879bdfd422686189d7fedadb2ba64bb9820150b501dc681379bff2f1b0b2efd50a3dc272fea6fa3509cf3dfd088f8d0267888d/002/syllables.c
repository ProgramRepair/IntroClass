/**/

#include <stdio.h>
#include <string.h>

int main (void)  {
	char input[21];
	int counter = 0, i;
	printf ("Please enter a string > ");
	fgets (input, 20, stdin);	
	for (i = 0; i < strlen(input); i++)	
		switch (input[i])  {
			case 'a': case 'A':
			case 'e': case 'E':
			case 'i': case 'I':
			case 'o': case 'O':
			case 'u': case 'U':
			case 'y': case 'Y':
				counter += 1;
				break;
			default:
				break;
		}
	printf("The number of syllables is %d.\n", counter);
	return 0;
}
