#include<stdio.h>
#include<math.h>
int main()
{
	int a,sum;
	scanf("%d",&a);
	sum = 0;
	while (a>0)
	{
		sum+=(a%10);
		a=a/10;
	}
	printf("%d",sum);
	return 0;
}