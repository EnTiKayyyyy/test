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
int a[27] = {0,0,1,3,6,10,15,21,28,36,45,55,66,78,91,105,120,136,153,171,190,
210,231,253,276,300,325};
int main()
{
	char s[60];
	scanf("%s",s);
	char temp = 'A';
    int cnt = 0;
    int res = 0;
    for (int i = 0 ; i < 52 ; i++)
    {
        if (s[i] == s[i+1] && s[i] == temp) 
        {
            res += a[cnt];
            cnt = 0;
            temp ++;
            continue;
        }
        if (s[i] != s[i+1] && s[i] == temp) 
        {
            cnt++;
            temp++;
            continue;
        }
    }
    res += a[cnt];
    printf("%d",res);
}
