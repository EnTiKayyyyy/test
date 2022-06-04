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
	int m;
	scanf("%d",&m);
	for (int o=1;o<=m;o++)
	{
	int n,i,j,k,sum;
	scanf("%d",&n);
	printf("Test %d:\n",o);
	int a[21][21],b[21][21],c[21][21];
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (j<=i)
			a[i][j]=j;
			else
			a[i][j]=0;
		}
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		b[j][i]=a[i][j];
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			sum=0;
			for (k=1;k<=n;k++)
			sum=sum+a[i][k]*b[k][j];
			c[i][j]=sum;
		}
	}
	for (i=1;i<=n;i++) 
	{
     	for (j=1;j<=n;j++) 
		{
       		printf("%d ",c[i][j]);
      	}
    printf("\n");
   	}
   }
   	return 0;
}