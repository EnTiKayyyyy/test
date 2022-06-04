/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
int main()
{
	int n;
	scanf("%d",&n);
	int a[51][51];
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	}
	int temp,b;
	for (int k=1;k<=n;k++)
	{
		b=n-k+1;
		temp=a[k][b];
		a[k][b]=a[k][k];
		a[k][k]=temp;
	}
	for (int z=1;z<=n;z++)
	{
		for (int x=1;x<=n;x++)
		printf("%d ",a[z][x]);
		printf("\n");
	}
	return 0;
}