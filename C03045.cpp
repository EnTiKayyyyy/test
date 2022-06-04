/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int main()
{
	int N = 1000;
	bool check[N + 1];
	for (int i = 2; i <= N; i++) 
	{
    	check[i] = true;
  	}
  	for (long long i = 2; i <= N; i++) 
	{
 	   	if (check[i] == true) 
		{
      		for (long long j = 2 * i; j <= N; j += i) 
			{
			check[j] = false;
      		}
    	}
  	}
	test
	{
		long long a;
		scanf("%lld",&a);
		for (long long k=1;k<=a;k++)
		{
			if (check[k] == true)
			{
				if (a%k==0)
				{
					printf("%lld\n",k);
					break;
				}
			}
		}
	}
	return 0;
}