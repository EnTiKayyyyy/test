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
int tcs(long long n)
{
	long long tong=0;
	while (n>0)
	{
		tong = tong + n%10;
		n=n/10;
	}
	if (tong%10==0)
	return 1;
	return 0;
}
int main()
{
	test
	{
		int n,dem=0;
		long long i;
		scanf("%d",&n);
		for (i=pow(10,n-1);i<pow(10,n);i++)
		{
			if (tn(i)==1&&tcs(i)==1)
			dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}