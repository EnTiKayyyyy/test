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

void ghep(char s1[] , char s2[] , char s12[] , int n)
{
    int j = 0;
    for (int i = 0 ; i < n ; i++)
    {
        s12[j++] = s2[i];
        s12[j++] = s1[i];
    }
    s12[j] = '\0';
}
void tach(char s1[] , char s2[] , char s12[] , int n)
{
    int j = 0;
    for (int i = 0 ; i < n ; i++) s1[i] = s12[j++];
    for (int i = 0 ; i < n ; i++) s2[i] = s12[j++];
}
int main()
{
    int n;
    while(n != 0)
    {
        int check = 0;
        scanf("%d",&n);
        if (n == 0) break;
        char s1[n],s2[n],s[2*n+5],s12[2*n+5];
        scanf("%s%s%s",s1,s2,s);
        char t1[n] , t2[n];
        strcpy(t1,s1);
        strcpy(t2,s2);
        int cnt = 0;
        while (1)
        {
            cnt++;
            ghep(s1,s2,s12,n);
            if (strcmp(s,s12) == 0) 
            {
                check = 1;
                break;
            }
            tach(s1,s2,s12,n);
            if (strcmp(s1,t1) == 0 && strcmp(s2,t2) == 0) break;
        }
        if (check) printf("%d\n",cnt);
        else printf("-1\n");
    }
}