
#include <math.h>
#include<stdio.h>
#define test long long t; scanf("%lld", &t); while (t--)
int snt(int a)
{
	if (a<2)
	return 0;
	if (a<4)
	return 1;
	if (a%2==0||a%3==0)
	return 0;
	for (int i=5;i<=sqrt(a);i+=6)
	{
		if (a%i==0||a%(i+2)==0)
		return 0;
	}
	return 1;
}
int cs(int a)
{
	int temp=a;
	int b;
	while(temp>0)
	{
		b=temp%10;
		if(b!=2&&b!=3&&b!=5&&b!=7)
		return 0;
		temp=temp/10;
	}
	return 1;
}
int tcs(int n)
{
	int tong=0;
	while (n>0)
	{
		tong+=n%10;
		n=n/10;
	}
	if (snt(tong)==1)
	return 1;
	return 0;
}
int main()
{
	test
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int temp;
		if (a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		int tt;
		int i,dem=0;
		for (i=a;i<=b;i++)
		{
			if(cs(i)==1&&snt(i)&&tcs(i)==1)
			dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}
