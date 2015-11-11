//
//
#include<stdio.h>

int main(){

  int num1, num2, num3, num4, min;

  printf( "Please enter 4 numbers separated by spaces > " );
  scanf( "%d %d %d %d", &num1, &num2, &num3, &num4 ); 

  min = num1;

  if( min > num2 )
    min = num2;
  if( min > num3 )
    min = num3;
  if( min > num4 )
    min = num4;
  printf( "%d is the smallest\n", min );
 
  return 0;

}
