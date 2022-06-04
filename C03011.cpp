#include<stdio.h>
#include<math.h>
long long gt(int n)
{
    if (n == 0)
    return 1;
    else
    return n * gt(n - 1);
}

long long ktt(int a)
{
	long long sum=0;
	int d,temp=a;
	while (temp>0)
	{
		d = temp%10;
		sum= sum + gt(d);
		temp=temp/10;
	}
	return sum;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if (m>=n)
	{
		for (int i=n;i<=m;i++)
		{
		if (ktt(i)==i)
		printf("%d\t",ktt(i));
		}
	}
	else
	{
		for (int i=m;i<=n;i++)
		{
		if (ktt(i)==i)
		printf("%d\t",ktt(i));
		}
	}
	return 0;
}