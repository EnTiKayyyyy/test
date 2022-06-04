#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,a,c[1000],d[1000],e[1000];
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)
	scanf("%d",&c[i]);
	for (int j=1;j<=m;j++)
	scanf("%d",&d[j]);
	scanf("%d",&a);
	for (int y=1;y<=a;y++)
	e[y]=c[y];
		for (int k=a+1;k<=n+m;k++)
		e[k+m]=c[k];
		for (int x=1;x<=m;x++)
		e[x+a]=d[x];
		for (int z=1;z<=n+m;z++)
		printf("%d\t",e[z]);
	return 0;
	
}