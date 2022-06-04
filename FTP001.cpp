/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		printf("0 ");
		for (k=1;k<=n-i;k++)
		printf("%d ",k);
		printf("\n");
	}
}