#include<stdio.h>
#include<math.h>
int main()
{
	long long a,sum;
	scanf("%lld",&a);
	sum=0;
	for (int i=1;i<=a/2;i++)
	{
		if (a%i==0)
		sum=sum+i;
	}
	if (sum==a)
	printf("1");
	else
	printf("0");
	return 0;
}