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
	int a[100],b[100000]={0};
	long long n,dem,d;
	scanf("%lld",&n);
	dem=0;
	while (n>0)
	{
		d=n%10;
		if (d==2||d==3||d==5||d==7)
		{
			dem++;
			a[dem]=d;
			n=n/10;	
		}
		else
		n=n/10;
	}
    int i;
	for(i=dem;i>=1;i--)
	{
		int c=a[i];
		b[c]++;
	}
	for(i=dem;i>=1;i--)
	{
		if(b[a[i]]>0)
		{
			printf("%d %d\n",a[i],b[a[i]]);
			b[a[i]]=0;
		}
	}
}
