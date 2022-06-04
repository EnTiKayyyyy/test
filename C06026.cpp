/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define test long long t; scanf("%lld",&t) ; while (t--)

struct tu
{
    char nd[1000];
    int len;
    int f;
};
int find(struct tu a[] , int n , char x[1000])
{
    for (int i = 0 ; i < n ; i++)
    {
        if (strcmp(x,a[i].nd) == 0) return i;
    }
    return -1;
}
int check(char n[])
{
	int len = strlen(n);
	for (int i = 0 ; i< len ; i++)
	{
		if (n[i] != n[len-i-1] ) return 0;
    }
    return 1;
}
int main()
{
    int n = 0;
    char temp[1005];
    struct tu a[1000];
    int max = 0;
    while (scanf("%s",temp) != -1)
    { 
    	if (check(temp))
    	{
        if (max < strlen(temp)) max = strlen(temp);
        int t = find(a,n,temp);
        if ( t != -1)
        {
            a[t].f ++;
        }
        else
        {
            strcpy(a[n].nd,temp);
            a[n].f = 1;
            n++;
        }
        }
    }
    for (int i = 0 ; i < n ; i++) 
        if (strlen(a[i].nd) == max)
            printf("%s %d\n",a[i].nd, a[i].f);
}
