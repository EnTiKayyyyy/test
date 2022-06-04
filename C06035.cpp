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

int main()
{
    test
    {
        char s[25];
        scanf("%s",s);
        int cnt = 0;
        for (int i = 0 ; i < strlen(s)/2 ; i++)
        {
            if (s[i] != s[strlen(s)-i-1]) cnt++;
        }
        if (cnt == 1 || (cnt == 0 && strlen(s) % 2 != 0)) puts("YES");
        else puts("NO");
    }
}