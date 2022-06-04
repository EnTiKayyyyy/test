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
struct number
{
    int value;
    int f;
};
int check(int n)
{
    while (n >= 10)
    {
        int temp = n % 10;
        if (temp < (n/10)%10) return 0;
        n /= 10;
    }
    return 1;
}
int find(struct number a[] , int n , int x)
{
    for (int i = 0 ; i < n ; i++)
    {
        if (a[i].value == x ) return i;
    }
    return -1;
}
int cmp(const void *a , const void *b)
{
    struct number* x = (struct number*)a;
    struct number* y = (struct number*)b;
    return y->f - x->f;
}
int main()
{
    int temp , n = 0;
    struct number num[100001];
    while (scanf("%d",&temp) != -1)
    {
        if (check(temp))
        {
            int t = find(num, n , temp);
            if (t != -1)
            {
                num[t].f ++; 
            }
            else 
            {
                num[n].value = temp;
                num[n].f = 1;
                n++;
            }
        }
    }
    qsort(num,n,sizeof(struct number),cmp);
    for (int i = 0 ; i < n ; i++) printf("%d %d\n",num[i].value,num[i].f);
}