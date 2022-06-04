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
	int n,a[100],b[100],c[100];
	int dc,dl,temp;
	dc=0;
	dl=0;
	scanf("%d",&n);
	nhapmang(a,n);
	for (int i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
			b[dc]=a[i];
			dc++;
		}
		else
		{
			c[dl]=a[i];
			dl++;
		}
	}
	for (int j=0;j<dc-1;j++)
	{
		for (int k=0;k<dl-1;k++)
		{
			if (b[k]>b[k+1])
			{
				temp=b[k];
				b[k]=b[k+1];
				b[k+1]=temp;
			}
		}
	}
	for (int j=0;j<dc-1;j++)
	{
		for (int k=0;k<dl-1;k++)
		{
			if (c[k]>c[k+1])
			{
				temp=c[k];
				c[k]=c[k+1];
				c[k+1]=temp;
			}
		}
	}
	for (int i=0;i<=dc;i++)
	a[i]=b[i];
	int dem=0;
	for (int i=dc;i<=dc-1+dl;i++)
	{
		a[i]=c[dem];
		dem++;
	}
	for (int i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
	
	
}