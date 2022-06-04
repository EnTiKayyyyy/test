#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[100],temp;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for (int j=1;j<=n-1;j++)
	{
		for (int k=1;k<=n-1;k++)
		{
			if (a[k]<a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	for (int z=1;z<=n;z++)
	printf("%d\t",a[z]);
	return 0;
}