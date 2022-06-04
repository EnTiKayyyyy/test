#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d\t%d",&a,&b);
	if (b==0)
	printf("0");
	else
	printf("%d\t%d\t%d\t%.2lf\t%d",a+b,a-b,a*b,(double)a/b,a%b);
	return 0;
}