#include<stdio.h>
int main()
{
	int n,a,i;
	double b;
	scanf("%d",&n);
	for (i=1;i<=n;i=i+1)
	{
		scanf("%d",&a);
		b=(double)1/a;
		printf("%.15lf\n",b);
	}
	return 0;
}