/**/
//**/
#include <stdio.h>
#include <string.h>

int main(){
    char string[19];

    int num_syl = 0;
    int index=0;

    printf("Please enter a string > ");
    fgets(string,19,stdin);
    while (index<19){
        if ((string[index] == 'a')||(string[index]=='e')||(string[index]=='i')||(string[index]=='o')||(string[index]=='u')||(string[index]=='y')){
            num_syl = num_syl + 1;
        }
        index = index+1;
    }
    printf("The number of syllables is %d.\n",num_syl);
    return (0);
}
