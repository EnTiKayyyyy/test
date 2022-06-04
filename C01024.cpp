#include<stdio.h>
#include<math.h>
int main()
{
	int a,c,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if (a>=10)
		{
			c=a%10;
			while (a>10)
			a=a/10;
		}
		if (c==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}