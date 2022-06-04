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
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d ", n)
int checkNT(int n){
	if(n<2){
		return 0;
	}
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n % i == 0) return 0;
		}
	}
	return 1;
}

int main(){
	int test = 1;
	int t; 
	scan(t);
	while(t--){
		
		int n;
		scan(n);
		int a[n][n];
		//
		int k=0;
		int arr[400];
		for(int i=2; i<405; i++){
			if(checkNT(i) == 1){
				arr[k] = i;
				k++;
			}
			if(k == n*n) break;
		}
		// 
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
		// in 
		printf("Test %d:\n", test);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				print(arr[a[i][j]-1]);
			}
			printf("\n");
		}
		test++;
	}
	return 0;
}

