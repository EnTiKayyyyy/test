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
	int m;
	scanf("%d",&m);
	for (int v=1;v<=m;v++)
	{
		int a[100],b[100000]={0};
		int n;
		scanf("%d",&n);
		nhapmang(a,n);
		printf("Test %d:\n",v);
   	 	int i;
		for(i=0;i<n;i++)
		{
			int c=a[i];
			b[c]++;
		}
		for(i=0;i<n;i++)
		{
			if(b[a[i]]>0)
			{
			printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
			b[a[i]]=0;
			}
		}
	}
}
