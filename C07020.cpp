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

struct pokemon
{
    char ten[100];
    int k;
    int m;
    int th;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct pokemon p[n];
    int max = 0 , cnt = 0 , cs = 0;
    for (int i =0 ; i < n ; i++)
    {
        p[i].th = 0;
        scanf("\n");
        gets(p[i].ten);
        scanf("%d%d",&p[i].k, &p[i].m);
        int tmp = 0;
        while (p[i].m >= p[i].k)
        {
           int tmp = p[i].m/p[i].k;
           p[i].th += tmp;
           p[i].m = p[i].m % p[i].k + tmp*2;
        }
        if (p[i].th > max)
        {
            max = p[i].th;
            cs = i;
        }
        cnt += p[i].th;
    }
    printf("%d\n",cnt);
    printf("%s\n",p[cs].ten);
}