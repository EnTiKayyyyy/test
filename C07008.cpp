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
int dt[10005] , cnt;
int isdigits(char n)
{
    if (n >= '0' && n <= '9') return 1;
    return 0;
}
void solve(char c[])
{
    for (int i = 0 ; i < strlen(c) ; i ++)
    {
        if (isdigits(c[i]))
        {
            int tmp = 0;
            while (c[i] != '*')
            {
                tmp = tmp*10+c[i]-'0';
                i++;
            }
            i += 3;
            int mu = 0;
            while (isdigits(c[i]))
            {
                mu = mu*10 + c[i] - '0';
                i++;
            }
            dt[mu] += tmp;
        }
    }
}

int main()
{
    test
    {
        scanf("\n");
        char c1[10001];
        char c2[10001];
        gets(c1);
        gets(c2);
        memset(dt,0,sizeof(dt));
        cnt = 0;
        solve(c1);
        solve(c2);
        for (int i = 10000 ; i >= 0 ; i--) 
            if (dt[i]) cnt++;
        for (int i = 10000 ; i >= 0 ; i--)
        {
            if (dt[i] != 0) 
            {
                printf("%d*x^%d",dt[i],i);
                cnt--;
                if (cnt != 0) printf(" + ");
            }
        }   
        printf("\n");
    }
}