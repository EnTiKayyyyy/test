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

struct phanSo
{
    int tu;
    int mau;
};
int gcd(int a , int b)
{
    while ( b != a)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}
int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}
int main()
{
    int cnt = 1;
    test
    {
        struct phanSo p;
        struct phanSo q;
        scanf("%d%d%d%d",&p.tu,&p.mau,&q.tu,&q.mau);
        printf("Case #%d:\n",cnt++);
        // rg p
        int a = p.mau , b = p.tu;
        int u = gcd(a,b);
        p.mau /= u;
        p.tu /= u;
        // rg q
        a = q.mau ;
        b = q.tu;
        u = gcd(a,b);
        q.mau /= u;
        q.tu /= u;
        //
        int mc = lcm(p.mau,q.mau);
        p.tu = mc/p.mau*p.tu;
        q.tu = mc/q.mau*q.tu;
        p.mau = q.mau = mc;
        printf("%d/%d %d/%d\n",p.tu,p.mau,q.tu,q.mau);
        printf("%d/%d\n",p.tu+q.tu,p.mau);
        struct phanSo thuong;
        thuong.tu = p.tu*q.mau;
        thuong.mau = p.mau*q.tu;
        a = thuong.mau ;
        b = thuong.tu;
        u = gcd(a,b);
        thuong.mau /= u;
        thuong.tu /= u;
        printf("%d/%d\n",thuong.tu,thuong.mau);
    }
}