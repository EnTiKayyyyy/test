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
    int t; 
    int n,count,temp,p,i; 
    scanf("%d",&t); 
    while(t--)
    { 
        count = 0; 
        scanf("%d %d",&n,&p); 
        i = 1; 
        while(p*i<=n)
        { 
            temp = p*i; 
            while(temp%p==0)
            { 
                temp/=p; 
                count++; 
            } 
            ++i; 
        } 
        printf("%d\n",count); 
    } 
    return 0; 
}