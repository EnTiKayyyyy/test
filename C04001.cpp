#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,c[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for (int j=0;j<a;j++)
		scanf("%d",&c[j]);
		for (int k=0;k<a;k++)
		{
			if (c[k]%2==0)
			printf("%d\t",c[k]);
		}
		printf("\n");
	}
	return 0;
}