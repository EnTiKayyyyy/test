#include<stdio.h>
#include<math.h>
int tcs(int a)
{
	int tong=0;
	while (a>0)
	{
		tong= tong + a%10;
		a=a/10;
	}
	return tong;
}
int tnt(int n)
{
	int tong=0;
	for (int j=2;j<=n;j++)
	{
		while(n%j==0)
		{
		if (j<10)
		tong=tong +j;
		else
		tong = tong +tcs(j);
		n=n/j;
		}
	}
	return tong;
}
int main()
{
	long long n;
	scanf("%lld",&n);
	if (tcs(n)==tnt(n))
	printf("YES");
	else
	printf("NO");
	return 0;
}