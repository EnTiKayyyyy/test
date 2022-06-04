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
void inThuong(char* s)
{
    for (int i = 0 ; i < strlen(s) ; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
}
int main()
{
    char s[1005];
    gets(s);
    inThuong(s);
    char a[50][50];
    int n = 0;
    char *token = strtok(s," ");
    while (token != NULL)
    {
        strcpy(a[n],token);
        n++;
        token = strtok(NULL," ");
    }
    int b[n] ;
    for (int i = 0 ; i < n ; i++) b[i] = 0;

    for (int i = 0 ; i < n ; i++)
    {
        if (b[i] == 0)
        {
            int cnt = 1;
            for (int j = i+1 ; j < n ; j++)
            {
                if (strcmp(a[i],a[j]) == 0) 
                {
                    cnt++;
                    b[j] = 1;
                }
            }
            printf("%s %d\n",a[i],cnt);
        }
    }
}