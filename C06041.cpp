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
    char s[100005];
    scanf("%s",s);
    int len = strlen(s);
    int pos = 0;
    char res[100005];
    int cnt = 0;
    while (pos < len)
    {
        char tmp = s[pos];
        int last_pos = pos;
        for (int i = pos; i < len ; i++)
            if (tmp < s[i]) tmp = s[i];
        for (int i = pos ; i <= len ; i++)
        {
            if (s[i] == tmp)
            {
                printf("%c",s[i]);
                last_pos = i;
            }
        }
        pos = last_pos+1;
    }
}