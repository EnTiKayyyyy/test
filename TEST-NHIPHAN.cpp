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
	int a,c,dem=0;
	scanf("%d",&a);
	long long d,b=0;
	while (a>0)
	{
		d=pow(10,dem);
		c=a%2;
		b=b+c*d;
		dem++;
		a=a/2;
	}
	printf("%lld",b);
	return 0;
}