/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
void nhapmang(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);	
}
int main()
{
	test
	{
		int n,a[1000];
		scanf("%d",&n);
		nhapmang(a,n);
		int i,j,dem=0;
		for (i=0;i<n-1;i++)
		{
			if (a[i]==a[i+1])
			dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}