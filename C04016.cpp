/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int snt(long long a)
{
	if (a<2)
	return 0;
	if (a<4)
	return 1;
	if (a%2==0||a%3==0)
	return 0;
	for (int i=5;i<sqrt(a);i+=6)
	{
		if (a%i==0||a%(i+2)==0)
		return 0;
	}
	return 1;
}
int main()
{
	int z;
	scanf("%d",&z);
	for (int c=1;c<=z;c++)
	{
		int n,temp;
		scanf("%d",&n);
		int a[1000],b[500000]={0};
		for (int i=1;i<=n;i++)
		scanf("%d",&a[i]);
		printf("Test %d:\n",c);
		for (int j=1;j<=n-1;j++)
		{
			for (int k=1;k<=n-1;k++)
			{
				if (a[k]>a[k+1])
				{
					temp=a[k];
					a[k]=a[k+1];
					a[k+1]=temp;
				}
			}
		}
		
		for (int i=1;i<=n;i++)
		{
			if (snt(a[i])==1)
			{
				b[a[i]]++;
			}
		}
		for (int i=0;i<n;i++)
		{
			if (b[a[i]]>0)
			{
				printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
				b[a[i]]=0;
			}
		}
	}	
	return 0;
}