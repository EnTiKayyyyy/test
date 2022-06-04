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
int tangChat(char bs[])
{
    for (int i = 0 ; i < 4 ; i++)
    {
        if (bs[i] >= bs[i+1]) return 0;
    }
    return 1;
}
int bangNhau(char bs[])
{
    for (int i = 0 ; i < 4 ; i++)
    {
        if (bs[i] != bs[i+1]) return 0;
    }
    return 1;
}
int baDauHaiCuoi(char bs[])
{
    if (bs[0] == bs[1] && bs[1] == bs[2] && bs[3] == bs[4]) return 1;
    return 0;
}
int locPhat(char bs[])
{
    for (int i = 0 ; i < 5 ; i++)
    {
        if (bs[i] != '8' && bs[i] != '6' ) return 0;
    }
    return 1;
}
int main()
{
    test
    {
        char b[100];
        scanf("\n");
        gets(b);
        int cnt = 0;
        char bs[5];
        for (int i = 6 ; i < 12 ; i++)
        {
            if (i != 9 )
            {
                bs[cnt++]=b[i];
            }
        }
        if (tangChat(bs) || bangNhau(bs) || baDauHaiCuoi(bs) || locPhat(bs)) puts("YES");
        else puts("NO");
    }
}