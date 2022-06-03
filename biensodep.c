#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long

int check1(char a[])
{
    for (int i=0;i<5;i++)
    {
        if (a[i]!='6' && a[i]!='8')
        return 0;
    }
    return 1;
}

int check2(char a[])
{
    for (int i=0;i<4;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if (a[i] != a[j])
            return 0;
        }
    }
    return 1;
}

int check3(char a[])
{
    for (int i=0;i<4;i++)
    {
        if (a[i+1]<=a[i])
        return 0;
    }
    return 1;
}

int check4(char a[])
{
    if (a[0]==a[1]&&a[1]==a[2]&&a[3]==a[4])
    return 1;
    return 0;
}

int main()
{
    test{
        scanf("\n");
        char a[100];
        gets(a);
        int j=0;
        char b[5];
        for (int i=6;i<strlen(a);i++)
        {
            if (i!=9)
            {
                b[j]= a[i];
                j++;
            }
        }
        if (check1(b)==1 || check2(b)==1 || check3(b)==1 || check4(b)==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
}