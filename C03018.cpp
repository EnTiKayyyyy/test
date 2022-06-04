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
int fb(long long n)
{
	long long tong=0;
	long long temp=n;
	while (temp>0)
	{
		tong= tong+temp%10;
		temp=temp/10;
	}
	long long a,b;
	double c,d;
	a=(long long)sqrt(5*tong*tong + 4);
	b=(long long)sqrt(5*tong*tong - 4);
	c=(double)sqrt(5*tong*tong + 4);
	d=(double)sqrt(5*tong*tong - 4);
	if (a==c||b==d)
	return 1;
	else
	return 0;
}
int snt(long long a)
{
	if (a < 2)
		return 0;
	if (a < 4)
		return 1;
	if (a % 2 == 0 || a % 3 == 0)
		return 0;
	for (int i = 5; i <= sqrt(a); i += 6)
	{
		if (a % i == 0 || a % (i+2) == 0)
		return 0;
	}
	return 1;
}

int main()
{
	long long a,b,n;
	scanf("%lld%lld",&a,&b);
	if (a>b)
	{
		n=a;
		a=b;
		b=n;
	}
	for (long long i=a;i<=b;i++)
	{
		if (snt(i)==1&&fb(i)==1)
		printf("%d\t",i);
	}
	return 0;
}
