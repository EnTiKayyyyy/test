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
#define ll long long
int main() 
{ 
    int x,test=1; 
    scanf("%d",&x); 
    while(x--) 
    { 
        int m,n,i,j,k,l; 
        scanf("%d %d",&m,&n); 
        int a[100][100]; // Nhap gia tri cho mang: 
        for(i=0;i<m;i++) 
        { 
            for(j=0;j<n;j++) 
            { 
                scanf("%d",&a[i][j]); 
            } 
        } //sap xep tang dan : 
        for(i=0;i<m;i++) { 
            for(j=0;j<n;j++) {
                 for(k=i;k<m;k++) {
                      for(l=j;l<n;l++) { 
                          if(a[i][j]>a[k][l]){
                               int temp=a[i][j]; 
                               a[i][j]=a[k][l]; 
                               a[k][l]=temp; 
                        } 
                    } 
                } 
            } 
        } // in test: 
        printf("Test %d:\n",test);test++; // in ket qua: 
        for(i=0;i<m;i++) { 
            for(j=0;j<n;j++) { 
                printf("%d ",a[i][j]); 
            } 
            printf("\n"); 
        } 
    }
}