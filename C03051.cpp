/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#define ll long long
#define test long long t; scanf("%lld",&t) ; while (t--)
ll n = 1000000;
ll check[1000001];
int main()
{
    // sàng nguyên tố
    for (int i = 2 ; i <= n ; i++) check[i] = 1;  
    for (int i = 2 ; i <= n ; i++)
    {
        if (check[i] == 1)
        {
            for (int j = 2*i ; j <= n ; j += i) check[j] = 0;
        }
    }
    //
    test
    {
        ll l , r;
        scanf("%lld%lld",&l,&r);
        if (l < 2) l = 2;
        int cnt = 0;
        for (ll i = l ; i*i <= r ; i++ )
        {
            if (check[i]) cnt++;
        }
        printf("%d\n",cnt);
    }
}