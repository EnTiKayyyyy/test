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
	int z;
	scanf("%d",&z);
	for (int x=1;x<=z;x++)
	{
		int n;
		scanf("%d",&n);
		int a[101],b[101],c[202];
		nhapmang(a,n);
		nhapmang(b,n);
		int temp;
		printf("Test %d:\n",x);
		for (int j=0;j<n-1;j++)
		{
			for (int k=0;k<n-1;k++)
			{
				if (a[k]>a[k+1])
				{
					temp=a[k];
					a[k]=a[k+1];
					a[k+1]=temp;
				}
			}
		}
		for (int j=0;j<n-1;j++)
		{
			for (int k=0;k<n-1;k++)
			{
				if (b[k]<b[k+1])
				{
					temp=b[k];
					b[k]=b[k+1];
					b[k+1]=temp;
				}
			}
		}
		for (int i=0;i<n;i++)
		{
			c[2*i]=a[i];
			c[2*i+1]=b[i];
		}
		for (int i=0;i<2*n;i++)
		printf("%d ",c[i]);
		printf("\n");
	}
}