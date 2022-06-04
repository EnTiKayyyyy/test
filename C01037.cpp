#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,sum;
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		c=a;
		a=b;
		b=c;
	}
	sum=0;
	for (i=a;i<=b;i++)
	sum=sum+i;
	printf("%d",sum);
	return 0;
}