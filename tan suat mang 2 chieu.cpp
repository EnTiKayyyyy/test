/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long
int main()
{
	int a,b;
	int m=-1;
	scanf("%d%d",&a,&b);
	int c[15][15];
	int temp;
	int dem[10000]={0};
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			scanf("%d",&c[i][j]);
			temp=c[i][j];
			dem[temp]++;
		}
	}
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			if (c[i][j]>m)
			m=c[i][j];
		}
	}
	for (int k=0;k<=m;k++)
	{
		if (dem[k]!=0)
		printf("%d ",k);
	}
	printf("\n");
	for (int z=0;z<=m;z++)
	{
		if (dem[z]!=0)
		printf("%d ",dem[z]);
	}
	return 0;
}