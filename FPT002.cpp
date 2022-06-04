/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
void nhapmang(int a[100][100],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}		
}
int main()
{
	int m,n,p,q,i,j,k,l,sum;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int a[100][100],b[100][100],c[100][100],d[100][100];
	nhapmang(a,m,n);
	nhapmang(b,n,p);
	nhapmang(c,p,q);
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			d[i][j]=0;
			for(k=0;k<n;k++)
			{
				d[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			long long x=0;
			for(int k=0;k<p;k++)
			{
				x+=d[i][k]*c[k][j];
			}
			printf("%d ", x);
		}
		printf("\n");
	}
	return 0;
}