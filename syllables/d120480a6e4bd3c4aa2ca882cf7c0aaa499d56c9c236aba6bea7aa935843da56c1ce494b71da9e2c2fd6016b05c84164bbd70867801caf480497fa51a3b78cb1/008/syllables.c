/**/

#include<stdio.h>
#include<string.h>
#define STR_LEN 21

int main (void) {

  char word[STR_LEN];
  int i, count; 

  count = 0;

  printf ("Please enter a string > ");
  fgets (word, STR_LEN-1, stdin);

  for (i=0; i<=STR_LEN-2; i++) {
    if (word[i] == 'a' ||
	word[i] == 'e' ||
	word[i] == 'i' ||
	word[i] == 'o' ||
	word[i] == 'u' ||
	word[i] == 'y')
      count = count +1;
    if (word[i] == '\n') {
      break;
    }
  }

  printf ("The number of syllables is %d.\n", count);


  return (0);

}
