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
		int n;
		scanf("%d",&n);
		int d1=0,d2=0;
		int temp;
		while (n>0)
		{
			temp=n%10;
			if (temp%2==0)
			d1++;
			else
			d2++;
			n/=10;
		}
		printf("%d %d\n",d2,d1);
	}
}