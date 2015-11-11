/**/
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int n, q=0, d10, d9, d8, d7, d6, d5, d4, d3, d2, d1;
	printf("\nEnter an integer > ");
	scanf("%d", &n);
	if (n<0){ q=11; n=abs(n); }
	d1 = n%10;
	d2 = (n%100-n%10)/10;
	d3 = (n%1000-n%100)/100;
	d4 = (n%10000-n%1000)/1000;
	d5 = (n%100000-n%10000)/10000;
	d6 = (n%1000000-n%100000)/100000;
	d7 = (n%10000000-n%1000000)/1000000;
	d8 = (n%100000000-n%10000000)/10000000;
	d9 = (n%1000000000-n%100000000)/100000000;
	d10 = (n%10000000000-n%1000000000)/1000000000;
	if (q==11) {
		if (n<10) q=1;
		else if (n<100)q=2;
		else if (n<1000)q=3;
		else if (n<10000)q=4;
		else if (n<100000)q=5;
		else if (n<1000000)q=6;
		else if (n<10000000)q=7;
		else if (n<100000000)q=8;
		else if (n<1000000000)q=9;
		else if (n<10000000000)q=10;
		if (q==1) d1*=-1;
		if (q==2) d2*=-1;
		if (q==3) d3*=-1;
		if (q==4) d4*=-1;
		if (q==5) d5*=-1;
		if (q==6) d6*=-1;
		if (q==7) d7*=-1;
		if (q==8) d8*=-1;
		if (q==9) d9*=-1;
		if (q==10) d10*=-1;
	}
	if (q==0){
		if (n<10) q=1;
		else if (n<100)q=2;
		else if (n<1000)q=3;
		else if (n<10000)q=4;
		else if (n<100000)q=5;
		else if (n<1000000)q=6;
		else if (n<10000000)q=7;
		else if (n<100000000)q=8;
		else if (n<1000000000)q=9;
		else if (n<10000000000)q=10;
	}
	if (q>=1) printf("\n%d", d1);
	if (q>=2) printf("\n%d", d2);
	if (q>=3) printf("\n%d", d3);
	if (q>=4) printf("\n%d", d4);
	if (q>=5) printf("\n%d", d5);
	if (q>=6) printf("\n%d", d6);
	if (q>=7) printf("\n%d", d7);
	if (q>=8) printf("\n%d", d8);
	if (q>=9) printf("\n%d", d9);
	if (q>=10) printf("\n%d", d10);
	printf("\nThat's all, have a nice day!\n");
	return (0);
}