/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int gt(int n)
{
    if (n == 1)
        return 1;
    return n * gt(n - 1);
}
int main()
{
	int n,a,temp,sum;
	scanf("%d",&n);
	temp=n;
	sum=0;
	while (temp>0)
	{
		a=temp%10;
		sum=sum+gt(a);
		temp=temp/10;
	}
	if (sum==n)
	printf("1");
	else
	printf("0");
	return 0;
}