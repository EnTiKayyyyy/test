/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
int tn ( long long n ) 
{
    long long m=n;
    long long songuoc=0;
    while (m>0) 
    {
        songuoc = songuoc * 10 + m % 10;
        m = m / 10;
    }
    if ( songuoc == n ) return 1;
    return 0;
}
int tcs(long long a)
{
	int tong=0;
	while (a>0)
	{
		tong=tong+a%10;
		a=a/10;
	}
	return tong;
}
int cs(long long a)
{
	int b;
	while (a>0)
	{
		b=a%10;
		a=a/10;
		if (b==4)
		return 0;
	}
	return 1;
}
int main()
{
	test
	{
		int a; scanf("%d",&a);
		for (int i=pow(10,a-1);i<pow(10,a);i++)
		{
			if (tn(i)==1&&tcs(i)%10==0&&cs(i)==1)
			printf("%d ",i);
		}	
		printf("\n");
	}
	return 0;
}