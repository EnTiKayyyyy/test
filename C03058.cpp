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

ll gcd(ll a , ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
ll lcm(ll a , ll b)
{
    return a/gcd(a,b)*b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll n;
        scanf("%lld",&n);
        long long res = 1;
        for (ll i = 1 ; i <= n ; i++)
        {
            res = lcm(res,i);
        }
        printf("%lld\n",res);
    }
}