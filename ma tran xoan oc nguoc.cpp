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
int main(){ 
	int t;
	scanf("%d",&t);
	int test=1;
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n][n];
		
		int side=n, mark=1, p=0;
		while(mark <= n*n){
			for(int i=p; i<side; i++){
				a[p][i] = mark++;
			}
			for(int i=p+1; i<side; i++){
				a[i][side-1] = mark++;
			}
			for(int i=side-2; i>=p; i--){
				a[side-1][i] = mark++;
			}
			for(int i=side-2; i>p; i--){
				a[i][p] = mark++;
			}
			p++;
			side--;
		}
		
		printf("Test %d:\n", test);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ",n*n+1-a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		test++;
	}
	return 0;
}
