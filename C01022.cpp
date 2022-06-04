#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,sum,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a);
		sum = 0;
		while (a>0)
		{
			sum+=(a%10);
			a=a/10;
		}
	printf("%d\n",sum);
	}
	return 0;
}