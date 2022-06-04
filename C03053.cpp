/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long

int snt(int a)
{
	if (a < 2)
		return 0;
	if (a < 4)
		return 1;
	if (a % 2 == 0 || a % 3 == 0)
		return 0;
	for (int i = 5; i <= sqrt(a); i += 6)
	{
		if (a % i == 0 || a % (i+2) == 0)
			return 0;
	}
	return 1;
}
int main()
{
	test
	{
		int a,b;
		scanf("%d",&a);
		if (a==4)
		printf("2 2\n");
		else
		{
			for (b=2;b<=a/2;b=b+1)
			{
				if (snt(b)==1&&snt(a-b)==1)
				printf("%d %d ",b,a-b);
			}
		}
		printf("\n");
	}
	return 0;
}