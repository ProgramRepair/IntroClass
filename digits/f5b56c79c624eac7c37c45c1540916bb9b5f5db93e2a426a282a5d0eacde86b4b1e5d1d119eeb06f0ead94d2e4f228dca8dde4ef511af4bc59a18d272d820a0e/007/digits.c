//
#include <stdio.h>
long long int check(long long int a, long long int b);

int main(){
	long long int in,num,digit,temp,lost,value;
	int a=0;
	printf("\nEnter an ingteger > ");
	scanf("%lld",&in);
	printf("\n");
	if(in >0){
		num=10;
		while (a <=12){
		value = in%num;
		if(lost==value){
		digit = 0;
		}
		else{
		digit = check(value,(num/10));
		}
		lost = value;
		num = num*10;
		temp = in%num;
		temp = check(temp,(num/10));
		if(temp ==in){
		printf("%lld\n",digit);
		break;
		}
		else{
		printf("%lld\n",digit);
		}
		a++;
	}}
	else if(in == 0){
	printf("0\n");
	}
	else{
		num=(-10);
		while( a<=12){
		value = in%(num);
		if(lost==value){
		digit = 0;
		}
		else{
		digit = check((-value),(-(num/10)));
		}
		lost = value;
		num = num*10;
		temp = in%num;
		temp = check((-temp),(-(num/10)));
		if(temp == (-in)){
		printf("-%lld\n",digit);
		break;
		}
		else{
		printf("%lld\n",digit);
		}
		a++;
	}}
	printf("That's all, have a nice day!\n");
	return 0;
}

long long int check(long long int a, long long int b){
	if(a >= b){
	a = a/b;
	return a;
	}
	else{
	return a;
	}
}
