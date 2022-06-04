#include<stdio.h>
#include<math.h>
int main()
{
	int a,c,l,b;
	scanf("%d",&a);
	int temp=a;
	c=0;
	l=0;
	while (temp>0)
	{
		b=temp%10;
		if (temp%2==0)
		c=c+1;
		else
		l=l+1;
		temp=temp/10;
	}
	printf("%d\t%d",l,c);
	return 0;
}