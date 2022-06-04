/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define test long long t; scanf("%lld",&t) ; while (t--)
int snt(int n){
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0) return 0;
    return 1;
}
int main()
{
    ll b[90];
    b[0] = 0;
    b[1] = 1;
    for (ll i = 2 ; i < 90 ; i++)
    {
        b[i] = b[i-1] + b[i-2];
    }
        ll n;
        scanf("%lld",&n);
        ll a[n][n] , cnt = 0;
        ll h1 = 0 , h2 = n-1 , c1 = 0 , c2 = n-1;
        while (h1 <= h2 && c1 <= c2)
        {
            for (ll i = c1 ; i <= c2 ; i++)
            {
                a[h1][i] = b[cnt];
                cnt++;
            }
            h1++;
            for (ll i = h1 ; i <= h2 ; i++)
            {
                a[i][c2] = b[cnt];
                cnt++;
            }
            c2 --;
            if (c1 <= c2)
            {
                for (ll i = c2 ; i >= c1 ; i--)
                {
                    a[h2][i] = b[cnt];
                    cnt++;
                }
                h2--;
            }
            if (h1 <= h2)
            {
                for (ll i = h2 ; i >= h1 ; i--)
                {
                    a[i][c1] = b[cnt];
                    cnt++;
                }
                c1++;
            }
        }
        for (ll i = 0 ; i < n ; i++)
        {
            for (ll j = 0 ; j < n ; j++)
            {
                printf("%lld ",a[i][j]);
            }
            printf("\n");
        }
}