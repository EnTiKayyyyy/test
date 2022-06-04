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
int main()
{
	test
	{
		long long a,m;
		scanf("%lld",&a);
		for (ll j=2;j<=sqrt(a);j++)
		{
			while(a%j==0)
			{
				m=j;
				a=a/j;
			}
		}
		if (a==1)
		printf("%lld\n",m);
		else
		printf("%lld\n",a);
	}
	return 0;
}