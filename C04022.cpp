#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[100],max1,max2,j;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
	if (a[0]>a[1])
	{
		max1=a[0];
		max2=a[1];
	}
	else if (a[0]<a[1])
	{
		max1=a[1];
		max2=a[0];
	}
	for (int i=2;i<n;i++)
	{
		if (a[i]>max1&&a[i]>max2)
		{
			max2=max1;
			max1=a[i];
		}
		else if (a[i]>max2&&a[i]<max1)
		{
			max2=a[i];
		}
	}
	printf("%d\t%d",max1,max2);
	return 0;
	
	
}