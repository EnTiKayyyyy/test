#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for (j=2;j<=a;j++)
		{
			while(a%j==0)
			{
				printf("%d\t",j);
				a=a/j;
			}
		}
		printf("\n");
	}
	return 0;
}