#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[1000],tong=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for (int j=1;j<=n;j++)
	tong=tong+a[j];
	printf("%.3lf",(double)tong/n);
	return 0;
	
}