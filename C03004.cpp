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
int ucln(int a,int b)
{
	if (b==0)
	return a;
	return ucln(b, a % b);
}
int main()
{
	int a,b;
	scanf("%d\t%d",&a,&b);
	printf("%lld\n",ucln(a,b));
	printf("%lld\n",(long long)a*b/ucln(a,b));
	return 0;
}