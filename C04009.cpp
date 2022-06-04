#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[1000];
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (int j=0;j<n;j++)
	if (a[j]%2==0)
	printf("%d\t",a[j]);
	printf("\n");
	for (int k=0;k<n;k++)
	if (a[k]%2!=0)
	printf("%d\t",a[k]);
	return 0;
}