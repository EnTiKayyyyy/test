/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int snt(long long a)
{
	if (a < 2)
		return 0;
	if (a < 4)
		return 1;
	if (a % 2 == 0 || a % 3 == 0)
		return 0;
	for (int i = 5; i <= sqrt(a); i += 6)
	{
		if (a % i == 0 || a % (i+2) == 0)
		return 0;
	}
	return 1;
}
int main()
{
	int n,i,j,tong=0;
	scanf("%d",&n);
	int a[100][100];
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	}
	for (i=1;i<=n;i++)
	{
		for (j=i;j<=n;j++)
		{
			if (snt(a[i][j])==1)
			tong=tong+a[i][j];
		}
	}
	printf("%d",tong);
	return 0;
}