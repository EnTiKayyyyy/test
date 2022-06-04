/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
void nhapmang(int a[1000],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);	
}
int main()
{
	test
	{
		int n;
		scanf("%d",&n);
		int a[101],b[30001]={0};
		nhapmang(a,n);
		int i,max=0;
		for(i=0;i<n;i++)
		{
			int c=a[i];
			b[c]++;
		}
		for(i=0;i<n;i++)
		{
			if(b[a[i]]>max)
			{
				max=b[a[i]];
			}
		}
		for(i=0;i<n;i++)
		{
			if (b[a[i]]==max)
			{
				printf("%d ",a[i]);
				b[a[i]]=0;
			}
		}
		printf("\n");
	}
	return 0;
}