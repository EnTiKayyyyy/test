#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,c,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		if (a>b)
		{
			for (j=1;j<=b;j++)
			{
				if (a%j==0&&b%j==0)
				c=j;
			}
			printf("%d\n",c);
		}
		else
		{
			for (j=1;j<=a;j++)
			{
				if (b%j==0&&a%j==0)
				c=j;
			}
			printf("%d\n",c);
		}
	}
	return 0;
	
	
}