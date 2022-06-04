#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if (a==0&&b==0)
	printf("Vo so nghiem");
	else if (a==0&&b!=0)
	printf("Vo nghiem");
	else
	printf("%.2lf",(double)-b/a);
	return 0;
}