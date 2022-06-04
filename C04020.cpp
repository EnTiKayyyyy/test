#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[100],b[100],c;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&c);
	for (int j=1;j<=c;j++)
	{
		b[j]=a[j+n-c];
	}
	for (int k=c+1;k<=n;k++)
	{
		b[k]=a[k-c];
	}
	for (int z=1;z<=n;z++)
	printf("%d\t",b[z]);
	return 0;
}