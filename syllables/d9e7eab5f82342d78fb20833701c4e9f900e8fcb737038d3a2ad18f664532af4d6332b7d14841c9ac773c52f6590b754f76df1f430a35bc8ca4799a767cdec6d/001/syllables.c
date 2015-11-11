/**/
#include <stdio.h>
#include <strings.h>

int main()    {
     
     char s[20];
     int lens,i,x,str,count=0;
     
     printf("Please enter a string > ");
     fgets(s,19,stdin);
     
     lens = strlen(s);
     
     for (i=0;i != lens;++i){
         if ( s[i] == '\n' )
         {
              continue;
         }
         str = s[i];
         if (str < 91 && str >64)
         {
              str = str +32;        
         }
         char x = (char)str;
         
         if (x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u'||x == 'y'){
            count = count + 1;
         }
     }
         
     printf("The number of syllables is %d.\n",count);
return(0);
}
