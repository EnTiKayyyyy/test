/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int main()
{
	int n; scanf("%d",&n);
	int i,j,k,l,m;
	for (i=1;i<=n-1;i++)
	{
		for (j=1;j<=(n-i)*2-1;j++)
		printf(".");
		for (k=1;k<=i;k++)
		printf(".%d",k);
		for (l=i-1;l>=1;l--)
		printf(".%d",l);
		printf(".");
		for (j=1;j<=(n-i)*2-1;j++)
		printf(".");
		printf("\n");
	}
	for (i=1;i<=n-1;i++)
	printf("%d.",i);
	printf("%d",n);
	for (i=n-1;i>=1;i--)
	printf(".%d",i);
	printf("\n");
	for (i=n-1;i>=1;i--)
	{
		for (j=1;j<=(n-i)*2-1;j++)
		printf(".");
		for (k=1;k<=i;k++)
		printf(".%d",k);
		for (l=i-1;l>=1;l--)
		printf(".%d",l);
		printf(".");
		for (j=1;j<=(n-i)*2-1;j++)
		printf(".");
		printf("\n");
	}
}