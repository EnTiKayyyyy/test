/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
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
int main()
{
	test
	{
		long long n;
		scanf("%lld",&n);
		long long dem,d,c,temp=n,p,q;
		dem=0;
		c=n%10;
		while (temp>0)
		{	
			d=temp%10;
			temp=temp/10;
			dem++;
		}
		if (d/c!=2&&c/d!=2)
		printf("NO");
		else
		{
		 	q = pow(10 , dem-1);
            p = (n - d * q - c) / 10;
			if (tn(p)==1)
			printf("YES");
			else
			printf("NO");
		}
		printf("\n");
	}
	return 0;
}