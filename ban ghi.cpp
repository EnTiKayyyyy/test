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
typedef struct 
{
    int a , b , c;
    double dt;
}tamgiac;
double dientich ( tamgiac tg )
{
    double p = (tg.a + tg.b + tg.c) / 2;
    tg.dt = sqrt (p * ( p -tg.a ) * ( p - tg.b ) * ( p -tg.c )); 
    return tg.dt;
}

void xuat ( tamgiac tg )
{
    printf ("%d %d %d", tg.a , tg.b , tg.c);
}

int main ()
{
    int n;
    scanf ("%d", &n);
    tamgiac tg[n];
    for (int i = 0 ; i < n ; i++)
    {
        scanf ("%d%d%d", &tg[i].a , &tg[i].b , &tg[i].c);
        tg[i].dt = dientich(tg[i]);
    }
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i + 1 ; j < n ;j++)
        {
            if ( tg[i].dt > tg[j].dt )
            {
                tamgiac t = tg[i];
                tg[i] = tg[j];
                tg[j] = t;
            }
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        xuat(tg[i]);
        printf ("\n");
    }
    return 0;
}