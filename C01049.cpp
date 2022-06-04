#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,c,l,b;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
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
	printf("%d\t%d\n",l,c);
	}
	return 0;
}