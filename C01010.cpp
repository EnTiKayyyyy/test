#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=(int)a/365;
	c=(int)(a-365*b)/7;
	d=(int)a-365*b-7*c;
	printf("%d\t%d\t%d\t",b,c,d);
	return 0;
	
}