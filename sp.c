#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000];
        scanf("\n");
        gets(s);
        int a[1000] = {0};
        int cnt = 0,max = -1 , max2 = -1,i = 0;
        while(i < strlen(s))
        {
            int temp = 0;
            int check = 0;
            while (s[i] >= '0' && s[i] <= '9')
            {
                temp = temp*10 + s[i] - '0';
                i++;
                check = 1;
            }
            if (check) a[cnt++] = temp;
            i++;
        }
        i = 0;
        while(i < cnt)
        {
            if (max < a[i]) max = a[i];
            i++;
        }
        i = 0;
        while(i < cnt)
        {
            if (a[i] < max && max2 < a[i]) max2 = a[i];
            i++;
        }
        if (max2 == -1 ) puts("-1");
        else printf("%d %d\n",max,max2);
    }
}