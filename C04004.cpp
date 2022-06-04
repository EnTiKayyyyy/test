#include<stdio.h>
#include<math.h>
int main()
{
	long long n,a,c[100];
	scanf("%lld",&n);
	for (int i=1;i<=n;i++)
	{
		int dem=0;
		scanf("%lld",&a);
		c[0]=1;
		c[1]=1;
		for (int j=2;j<a;j++)
		c[j]=c[j-2]+c[j-1];
		printf("%lld\n",c[a-1]);
	}
	return 0;
}