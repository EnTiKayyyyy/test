/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int tn(long long n)
{
	long long temp=n;
	long long dao,a;
	dao=0;
	while (temp>0)
	{
		a=temp%10;
		dao=dao*10+a;
		temp=temp/10;
	}
	if (dao==n)
	return 1;
	return 0;
}
int kt(long long n)
{
	int a;
	while (n>0)
	{
		a=n%10;
		if (a==9)
		{
			return 0;
			break;
		}
		else
		n=n/10;
	}
	return 1;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for (int i=2;i<=n;i++)
	{
		if (tn(i)==1&&kt(i)==1)
		{
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n");
	printf("%d",dem);
	return 0;
}