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
int main()
{
	test
	{
		int a,i,j,dem;
		scanf("%d",&a);
		dem=0;
		printf("%d = ",a);
		for (j=2;j<=a;j++)
		{
			while(a%j==0)
			{
				dem++;
				a=a/j;
			}
			if (dem>0)
			printf("%d^%d",j,dem);
			if (a>1&&dem>0)
			printf(" * ");
			dem=0;
		}
		printf("\n");
	}
	return 0;
}