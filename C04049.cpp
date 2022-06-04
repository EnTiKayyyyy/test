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
int gcd(int a , int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm (int a , int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    test
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
        int b[n+1];
        b[0] = a[0] ;
        b[n] = a[n-1];
        for (int i = 1 ; i < n ; i++)
        {
            b[i] = lcm(a[i-1],a[i]);
        }
        for (int i = 0 ; i <= n ; i++) printf("%d ",b[i]);
        printf("\n");
    }
}