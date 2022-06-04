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
void swap(ll* x, ll* y)
{
	ll n=*x;
	*x=*y;
	*y=n;
}
int main(){
	ll x, y;
	while(scanf("%lld", &x) !=-1&&scanf("%lld", &y)!=-1)
	{
		if(x>y) swap(&x, &y);
		ll dem=0;
		ll step=1;
		while(x<y)
		{
			if(y-x>=2*step)
			{
				dem+=2;
				x+=step;
				y-=step;
			}
			else 
			{
				dem++;
				x+=step;
			}
			step++;
		}
		printf("%lld\n", dem);
	}
	return 0;
}