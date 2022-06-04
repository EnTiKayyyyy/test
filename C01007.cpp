#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d\t%d",&a,&b);
	printf("%d\n%d\n%lld\n%d\n%d\n%.2lf",a+b,a-b,(long long)a*b,(int)a/b,a%b,(double)a/b);
	return 0;
}