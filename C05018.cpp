/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>

int main()
{   
    int t;
    scanf("%d",&t);
    for ( int p = 1 ; p <= t ; p++)
    {
        int n;
        scanf("%d",&n);
        int a[100][100];
        int hang = n-1 , cot = n-1 , gt = n*n, d = 0;
        while ( d <= n/2)
        {
            for ( int i = d ; i <= cot ; i++) a[d][i] = gt--;
            for ( int i = d+1 ; i <= hang ; i++) a[i][cot] = gt--;
            for ( int i = cot-1; i >= d ; i--) a[hang][i] = gt--;
            for ( int i = hang-1; i > d ; i--) a[i][d] = gt--;
            d++ , hang -- , cot--;
        }
        printf("Test %d:\n",p);
        for ( int i = 0 ; i < n ; i++)
        {
            for ( int j = 0 ; j < n ; j++) printf("%d ",a[i][j]);
            printf("\n");
        }
    }
}