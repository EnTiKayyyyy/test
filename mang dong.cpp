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
    int n;
    scanf("%d",&n);
    int a = (int)malloc(n*sizeof(int));
    for ( int i = 0 ; i < n ; i++)
        scanf("%d",*a+i);
    for (int i = n-1 ; i >= 0 ; i--)
        printf("%d ",*(a+i));
}
