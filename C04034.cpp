#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b[1000],dem;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for (int j=1;j<=a;j++)
		scanf("%d",&b[j]);
		for (int k=1;k<=a;k++)
		{
			dem=0;	
			for (int z=k+1;z<=a;z++)
			{
				if (b[z]>=b[k])
				dem=1;
			}
			if (dem==0)
			printf("%d\t",b[k]);
		}
		printf("\n");
	}
	return 0;
}