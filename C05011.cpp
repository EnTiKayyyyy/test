/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>
#define ll long long
int main()
{
    int t;
    scanf("%d",&t);
    for ( int p = 1 ; p <= t ; p++)
    {
            int n,m;
            scanf("%d%d",&m,&n);
            int a[100][100], b[100][100];
            for ( int i = 0 ; i < m ; i ++) {
                for ( int j = 0 ; j < n ; j++) {
                    scanf("%d",&a[i][j]);
                    b[j][i] = a[i][j];
                }
            }
            long long t[100][100] = {};
            for ( int i = 0 ; i < m ; i ++) {
                for ( int j = 0 ; j < m ; j++) {
                    for ( int k = 0 ; k < n ; k ++) t[i][j] += a[i][k] * b[k][j];
                }
            }
            printf("Test %d:\n",p);
            for ( int i = 0 ; i < m ; i ++) {
                for ( int j = 0 ; j < m ; j++) {
                    printf("%lld ",t[i][j]);
                }
                printf("\n");
            }
    }
}