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
int cmp(const void*a , const void *b)
{
    char x[100] , y[100] , z[100] , t[100];
    strcpy(x,(char*)a);
    strcpy(z,x);
    strcpy(y,(char*)b);
    strcpy(t,y);
    strcat(x,y);
    strcat(t,z);
    if (strcmp(x,t) < 0) return -1;
    return 1;
}
int main()
{
    test
    {
        int n;
        scanf("%d",&n);
        char a[10][11];
        for (int i = 0 ; i < n ;i++) scanf("%s",a[i]);
        qsort(a,n,sizeof(a[0]),cmp);
        for (int i = 0 ; i < n ; i++) printf("%s",a[i]);
        printf("\n");
    }
}