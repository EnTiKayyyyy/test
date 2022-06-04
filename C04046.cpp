#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define test long long t; scanf("%lld", &t); while (t--)

int cmp(const void *a , const void*b)
{
	int *x = (int*)a;
	int *y = (int*)b;
	return *x-*y;
}
int main()
{
	test
	{
		int n,dem=1;
		int temp;
		int c,min=1e9;
		scanf("%d",&n);
		int a[100000];
		for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
		qsort(a,n,sizeof(a[0]),cmp);
		for (int j=0;j<n-1;j++)
		{
			temp=a[j+1]-a[j];
			if (temp<min)
			{
				min=temp;
				dem=1;
			}
			else if (temp==min)
			dem++;
		}
		printf("%d %d\n",min,dem);
	}
	return 0;
}