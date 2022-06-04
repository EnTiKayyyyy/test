#include<stdio.h>
#include<math.h>
int main()
{
	int n,c[100];
	scanf("%d",&n);
	c[0]=0;
	c[1]=1;
	for (int i=2;i<n;i++)
	c[i]=c[i-2]+c[i-1];
	for (int j=0;j<n;j++)
	printf("%d\t",c[j]);
	return 0;
}