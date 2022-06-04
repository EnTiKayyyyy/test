/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int main()
{
	long long tong=0;
	test
	{
		int a,i,j;
		scanf("%d",&a);
		while (a%2==0)
		{
			tong+=2;
			a=a/2;
		}
		for (j=3;j<=sqrt(a);j+=2)
		{
			while(a%j==0)
			{
				tong+=j;
				a=a/j;
			}
		}
		if (a!=1)
		tong+=a;
	}
	printf("%lld",tong);
	return 0;
}