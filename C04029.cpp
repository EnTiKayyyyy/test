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
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for ( int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
    //sort
    int cnt = 1 , check = 0;
    for ( int i = 0 ; i < n - 1 ; i++) 
    {
        for ( int j = 0 ; j < n-i-1 ; j++)
        {
            if ( a[j] > a[j+1]) 
            {
                //swap
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                check = 1;
            }
        }
    if (check)
    {
        printf("Buoc %d: ",cnt);
        for ( int k = 0 ; k < n ; k++) printf("%d ",a[k]);
        printf("\n");
        cnt ++;
        check = 0;
    }
    }
}