/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int tcs(long long n)
{
	long long tong=0;
	while (n>0)
	{
		tong+=n%10;
		n=n/10;
	}
	if (tong%5==0)
	return 1;
	return 0;
}
int snt(long long a)
{
	if (a<2)
	return 0;
	if (a<4)
	return 1;
	if (a%2==0||a%3==0)
	return 0;
	for (int i=5;i<sqrt(a);i+=6)
	{
		if (a%i==0||a%(i+2)==0)
		return 0;
	}
	return 1;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for (int i=5;i<=n;i++)
	{
		if (snt(i)==1)
		{
			if (tcs(i)==1)
			{
				printf("%d ",i);
				dem++;
			}
		}
	}
	printf("\n");
	printf("%d",dem);
	return 0;
}