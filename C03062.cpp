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


ll GCD(ll a, ll b)
{
    while ( b != 0)
    {
        ll tmp = a % b;
        a = b;
        b = tmp; 
    }
    return a;
}
ll LCM(ll a , ll b )
{
    return a*b/GCD(a,b);
}
int main()
{
    test
    {
        ll n,m;
        scanf("%lld%lld",&n,&m);
        if ( n == m) printf("%lld\n",n);
        else
        {
            ll res = LCM(n,n+1);
            for (ll i = n+1 ; i <= m ; i++)
            {
                res = LCM(i,res);
            }
            printf("%lld\n",res);
        }
    }
}