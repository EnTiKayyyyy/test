#include<stdio.h>
#include<math.h>
int test(long long a)
{
	int dem=0;
	for (int i=2;i<=a;i=i+2)
	{
		if (a%i==0)
		dem++;
	}
	return dem;
}

int main()
{
	long long n,a;
	scanf("%lld",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",&a);
		printf("%d\n",test(a));
		
	}
	return 0;
}