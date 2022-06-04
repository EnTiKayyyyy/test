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
	int n,a,sum;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		sum = 0;
		while (a>0)
		{
			sum+=(a%10);
			a=a/10;
		}
		if (sum%10==0)
		printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}