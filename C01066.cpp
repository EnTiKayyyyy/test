#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d\t%d\t%d",&a,&b,&c);
	int temp=a;
	if (b<temp)
	temp=b;
	if (c<temp)
	temp=c;
	printf("%d",temp);
	return 0;
}