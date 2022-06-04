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
void reverse(int a[] , int n)
{
    int l = 0 , r = n-1;
    while (l < r)
    {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l;
        --r;
    }
}
void add (char a[] , char b[])
{
    int n1 = strlen(a) , n2 = strlen(b) , n = 0;
    int x[n1] , y[n1] , z[n1+1];
    for (int i = 0 ; i < n1 ; i++) x[i] = a[i] - '0';
    for (int i = 0 ; i < n2 ; i++) y[i] = b[i] - '0';
    reverse(x,n1);
    reverse(y,n2);
    for (int i = n2 ; i < n1 ; i++) y[i] = 0;
    int nho = 0;
    for (int i = 0 ; i < n1 ; i++)
    {
        int tmp = x[i] + y[i] + nho;
        z[n++] = tmp%10;
        nho = tmp/10;
    }
    if (nho) z[n++] = nho;
    for (int i = n-1 ; i >= 0 ; i--) printf("%d",z[i]);
}

int main()
{
    test
    {
        char c[1001] , d[1001];
        scanf("%s%s",c,d);
        if (strlen(c) >= strlen(d)) add(c,d);
        else add(d,c);
        printf("\n");
    }
}