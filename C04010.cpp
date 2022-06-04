#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[100],min1,min2,j;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
	if (a[0]<a[1])
	{
		min1=a[0];
		min2=a[1];
	}
	else if (a[0]>a[1])
	{
		min1=a[1];
		min2=a[0];
	}
	for (int i=2;i<n;i++)
	{
		if (a[i]<min1&&a[i]<min2)
		{
			min2=min1;
			min1=a[i];
		}
		else if (a[i]<min2&&a[i]>min1)
		{
			min2=a[i];
		}
	}
	printf("%d\t%d",min1,min2);
	return 0;
	
	
}