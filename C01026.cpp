#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,i,j,k,m;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if (a==1)
		printf("NO");
		else
		{
			b= (int)sqrt(a)+1;
			k=0;
			for (j=1;j<=b;j=j+1)
			{
				if (a%j==0)
				{
					k=k+1;
				}
			}
			if (k==1)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
	return 0;
}