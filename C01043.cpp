#include <stdio.h>
#include<math.h>
long long gt(int n)
{
    if (n == 0)
    return 1;
    else
    return n * gt(n - 1);
}
int main()
{
	int a,d;
	scanf("%d",&a);
	long long sum=0;
	int temp=a;
	while (temp>0)
	{
		d = temp%10;
		sum= sum + gt(d);
		temp=temp/10;
	}
	if (sum==a)
	printf("1");
	else
	printf("0");
	return 0;
}