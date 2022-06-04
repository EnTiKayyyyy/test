/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int A[n][n];
    int cot1=0,hang1=0,cot2=n-1,hang2=n-1;
    int k=1;
    while(k<=n*n){

        for(int i=cot1;i<=cot2;i++){
            A[hang1][i]=k;
            k++;
        }
        for(int j=hang1+1;j<=hang2;j++){
            A[j][cot2]=k;
            k++;
        }
        for(int i=cot2-1;i>=cot1;i--){
            A[hang2][i]=k;
            k++;
        }
        for(int j=hang2-1;j>=hang1+1;j--){
            A[j][cot1]=k;
            k++;
    }
    
    hang1++;
    cot1++;
    cot2--;
    hang2--;
    }
     for(int i=0; i<n; i++)
    {
      for(int j=0;j<n;j++)
      {
         printf("%d ", A[i][j]);
      }
            printf("\n");
         }

}