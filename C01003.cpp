#include<stdio.h>
int main()
{
	long n,a,i;
	scanf("%ld",&n);
	for (i=1;i<=n;i=i+1)
	{
		scanf("%ld",&a);
		printf("%lld\n",(long long)a*a);
	}
	return 0;
}