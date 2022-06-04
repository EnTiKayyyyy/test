/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <math.h>
#include <stdio.h>
#include <string.h>
#define ll long long
#define test long long t; scanf("%lld",&t) ; while (t--)
void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a1,b1,a2,b2,a3,b3;
    scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
    int s = a1*b1 + a2*b2 + a3*b3;
    float temp = sqrt(s);
    int c = (int) temp;
    if (temp != (int)temp) printf("NO");
    else
    {
        //TH1
        if (a1 > b1) swap(&a1,&b1);
        if (a2 > b2) swap(&a2,&b2);
        if (a3 > b3) swap(&a3,&b3);
        if (b1 == b2 && b2 == b3) printf("YES");
        else
        {
            //TH2
            if (b2 == c)
            {
                swap(&a1,&a2);
                swap(&b1,&b2);
            }
            if (b3 == c)
            {
                swap(&a1,&a3);
                swap(&b1,&b3);
            }
            if (b1 == c)
            {
                a1 = c - a1;
                if (a2 == a1 && a3 == a1 || b2 == a1 && a3 == a1 || a2 == a1 && b3 == a1 || b2 == a1 && b3 == a1) 
                printf("YES");
                else printf("NO");
            }
            else printf("NO");
        }
    }
}