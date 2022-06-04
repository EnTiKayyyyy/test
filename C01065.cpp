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
	long long n,dem=0;
	scanf("%lld",&n);
	int c;
	int a[10000],b[10]={0};
	while (n>0)
	{
		dem++;
		a[dem]=n%10;
		n=n/10;
	}
	for (int i=dem;i>=1;i--)
	{
		if (a[i]==2||a[i]==3||a[i]==5||a[i]==7)
		{
			c=a[i];
			b[c]++;
		}
	}
	for (int j=dem;j>=1;j--)
	{
		if (b[a[j]]>0)
		{
				printf ("%d %d\n",a[j],b[a[j]]);
				b[a[j]]=0;
		}
	}
	return 0;
	
	
	
}