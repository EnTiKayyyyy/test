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
    int n;
    scanf("%d",&n);
    int b[n][n];
    for (int i = 0 ; i < n ; i++)
        for ( int j = 0 ; j < n ; j++) scanf("%d",&b[i][j]);
    //
    int cnt = 0, max = -1e9 , cs = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            if (snt(b[i][j])) cnt++;
        }
        if (max < cnt)
        {
            max = cnt;
            cs = i;
        }
        cnt = 0;
    }
    printf("%d\n",cs+1);
    for (int i = 0 ; i < n ; i++)
    {
        if (snt(b[cs][i])) printf("%d ",b[cs][i]);
    }
}