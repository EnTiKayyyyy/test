#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,c[100];
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int dem=0;
		scanf("%d",&a);
		for (int j=0;j<a;j++)
		scanf("%d",&c[j]);
		for (int k=0;k<a;k++)
		{
			if (c[k]!=c[a-k-1])
			{
				dem=1;
				break;
			}	
		}
		if (dem==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}