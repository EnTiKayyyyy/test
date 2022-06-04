/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#define ll long long
#define test long long t; scanf("%lld",&t) ; while (t--)
int main()
{
    ll n;
    scanf("%lld",&n);
    ll a,b , mina = 9999999 , minb = 9999999;
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%lld%lld",&a,&b);
        if (mina > a) mina = a;
        if (minb > b) minb = b;
    }
    printf("%lld",mina*minb);
}