#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,i;
	double c;
	scanf("%d",&n);
	for (i=1;i<=n;i=i+1)
	{
	scanf("%d",&a);
	b =(int) sqrt(a);
	c =(double) sqrt(a);
	if (b==c)
	printf("YES\n");
	else
	printf("NO\n");
	}
	return 0;
}