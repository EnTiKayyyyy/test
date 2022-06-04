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

int main()
{
    int n;
    scanf("%d",&n);
    int sumUP = 0 , sumDown = 0, minUP = 999999 , minDown = 999999, a, b;
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d%d",&a,&b);
        sumUP += a;
        sumDown += b;
        if (a < minUP) minUP = a;
        if (b < minDown) minDown = b;
    }
    sumDown += minUP;
    sumUP += minDown;
    if (sumDown > sumUP) printf("%d",sumDown);
    else printf("%d",sumUP);
}