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

int check(char n[])
{
    int len = strlen(n);
    int chan = 0 , le = 0;
    for (int i = 0 ; i < len ; i++)
    {
        if (n[i] == '2' || n[i] == '4' || n[i] == '6' || n[i] == '8' || n[i] == '0') chan++;
        else le++;
    }
    if (chan > le && len % 2 == 0) return 1;
    if (le > chan && len % 2 != 0) return 1;
    return 0;
}

int main()
{
    test
    {
        char n[1005];
        scanf("%s",n);
        int c = 1;
        for (int i = 0 ; i < strlen(n) ;i++)
        {
            if (n[i] < '0' || n[i] > '9' || n[0] == '0') 
            {
                puts("INVALID");
                c = 0;
                break;
            }
        }
        if (c == 1)
        {
            if (check(n)) puts("YES");
            else puts("NO");
        }
    }
}