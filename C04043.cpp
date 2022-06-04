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
int solve(int b[],int n) 
{ 
    long long a[n]; 
    for(int i = 0; i < n; i ++) 
    a[i] = (long long)b[i] * b[i]; 
    for(int i = n-1; i >= 2; i --) 
    { 
        int l = 0, r = i -1;
        while(l<=r) 
        { 
            if(a[i] == a[l]+a[r]) return 1; //tim dc bo 3 return 1 
            if(a[i] > a[l]+a[r]) l++; // neu nho hon tang a[l] (a[r] da max ko the tang) 
            else r --;//neu lon hon giam a[r] (a[l] da min ko the giam) 
        } 
    } 
    return 0; 
} 
int main() 
{ 
    int t; 
    scanf("%d",&t); 
    while(t--) 
    { 
        int n; 
        scanf("%d",&n); 
        int a[n]; 
        for(int i=0;i<n;i++) 
        { 
            scanf("%d",&a[i]); 
        } 
        for(int i=0;i<n-1;i++) 
        { 
            for(int k = i+1;k<n;k++) 
            {
                 if(a[i]>a[k]) 
                { 
                    int c=a[i]; 
                    a[i]=a[k]; 
                    a[k]=c;
                } 
            } 
        } 
        if(solve(a,n)==1) puts("YES"); 
        else puts("NO"); 
    } return 0; 
} 