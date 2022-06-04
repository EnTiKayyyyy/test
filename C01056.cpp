#include<stdio.h>
int main()
{
	int n,b,d,f;
	long long a;
	int c[100];
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",&a);
		d=0;
		f=0;
		while (a>0)
		{
			d=d+1;
			c[d]=a%10;
			a=a/10;
		}
		for (int j=1;j<=d-1;j++)
		{
			if (c[j]<c[j+1])
			f=f+1;
		}
		if (f==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}