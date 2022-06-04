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
    int b[401];
    int dem = 0 ,  d = 2;
    while (dem < 400)
    {
        if (snt(d))
        {
            b[dem] = d;
            dem++;
        }
        d++;
    }
    int tes = 1;
    test
    {
        int n;
        scanf("%d",&n);
        int a[n][n] , cnt = 0;
        int h1 = 0 , h2 = n-1 , c1 = 0 , c2 = n-1;
        while (h1 <= h2 && c1 <= c2)
        {
            for (int i = c1 ; i <= c2 ; i++)
            {
                a[h1][i] = b[cnt];
                cnt++;
            }
            h1++;
            for (int i = h1 ; i <= h2 ; i++)
            {
                a[i][c2] = b[cnt];
                cnt++;
            }
            c2 --;
            if (c1 <= c2)
            {
                for (int i = c2 ; i >= c1 ; i--)
                {
                    a[h2][i] = b[cnt];
                    cnt++;
                }
                h2--;
            }
            if (h1 <= h2)
            {
                for (int i = h2 ; i >= h1 ; i--)
                {
                    a[i][c1] = b[cnt];
                    cnt++;
                }
                c1++;
            }
        }
        printf("Test %d:\n",tes++);
        for (int i = 0 ; i < n ; i++)
        {
            for (int j = 0 ; j < n ; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
}