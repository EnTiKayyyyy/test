/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int check(long long n)
{
	int a;
	long long temp=n;
	while (temp>0)
	{
		a=temp%10;
		if (a!=0&&a!=1&&a!=8&&a!=9)
		return 0;
		else
		temp=temp/10;	
	}
	return 1;	
}
void thaydoi(long long n)
{
	int a,b=0;
	long long temp=n;
	while (temp>0)
	{
		a=temp%10;
		if (a!=1)
		n=n-a*pow(10,b);
		b++;
		temp=temp/10;
		}	
	if (n==0) printf("INVALID\n");
	else
	printf("%lld\n",n);
}
int main()
{
	test
	{
		long long n;
		scanf("%lld",&n);
		if (check(n)==0)
		printf("INVALID\n");
		else
		thaydoi(n);	
	}
	return 0;
}