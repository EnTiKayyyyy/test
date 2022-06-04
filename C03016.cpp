/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
long long Fibonacci(int n)
{
    long long Fibo[94];
    Fibo[1] = 0;
    Fibo[2] = 1;

    for (int i = 3; i <= 93; i++)
    {
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
    }
    return Fibo[n];
}

int fb(long long n)
{
    for (int i = 1; Fibonacci(i) <= n; i++)
    {
        if (Fibonacci(i) == n)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
	test
	{
		long long a;
		scanf("%lld",&a);
		
		if (fb(a)==1)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	return 0;
}