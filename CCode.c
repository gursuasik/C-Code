#include<stdio.h>
//#define K 0
//#define K 1
#define K -34
void k(void)
{
	int x;
	*(&x+3)+=K;
}

void main(void)
{
	int x,y;
	y=1;
	x=0;
	printf("%d. olarak x=%d\n",y++,x);
	k();
	x=1;
	printf("%d. olarak x=%d\n",y,x);
}
