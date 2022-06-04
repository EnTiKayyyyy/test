#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	for (i=1;i<=10;i++)
	{
		printf("%lld\t",(long long)a*i);
	}
	return 0;
}