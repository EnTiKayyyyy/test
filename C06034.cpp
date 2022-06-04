/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#define test long long t; scanf("%lld", &t); while (t--)
int main()
{
	test
	{
		scanf("\n");
		char lm[30];
		gets(lm);
		int a[100];
		int dd = strlen(lm);
		for(int i = 0; i < dd; i++)
		{
			switch (lm[i])
			{
				case 'I': a[i] = 1; break;
				case 'V': a[i] = 5; break;
				case 'X': a[i] = 10; break;
				case 'L': a[i] = 50; break;
				case 'C': a[i] = 100; break;
				case 'D': a[i] = 500; break;
				case 'M': a[i] = 1000; break;
			}
		}
 
		int sum = a[dd-1];
		for (int i = dd - 2; i >= 0; --i)
		{
			if (a[i] < a[i+1])
				sum -= a[i];
			else if (a[i] >= a[i+1])
				sum += a[i];
		}
 
		printf("%d\n", sum);
	}
	return 0;
}