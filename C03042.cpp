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
	int a,b;
	int temp=n;
	while (temp>10)
	{
		a=temp%10;
		temp=temp/10;
		b=temp%10;
		if (a>=b)
		return 0;
	}
	return 1;
}
int main()
{
	test
	{

		long long a,b; 
		int dem=0;
		scanf("%lld%lld",&a,&b);
		long long i;
		for (i=a;i<=b;i++)
		{
			if (check(i)==1)
			dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}