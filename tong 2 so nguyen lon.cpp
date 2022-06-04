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
#define print(n) printf("%d", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)] = 0;
int main(){
	int t;
	scan(t);
	while(t--){
		scanf("\n");
		char str1[505];
		char str2[505];
		
		fgets(str1, 500, stdin);
		str1[strlen(str1)-1] = '\0';
		fgets(str2, 500, stdin);
		str2[strlen(str2)-1] = '\0';
		
		int a[505] = {};
		int b[505] = {};
		int k = 0;
		
		for(int i=strlen(str1)-1; i>=0; i--){
			a[k] = str1[i] - '0';
			k++;
		}
		int max = k;
		k=0;
		for(int i=strlen(str2)-1; i>=0; i--){
			b[k] = str2[i] - '0';
			k++;
		}
		if(max < k) max = k;
		
		int sum[505] = {};
		int nho = 0;
		for(int i=0; i<max; i++){
			sum[i] = a[i] + b[i] + nho;
			nho = 0;
			if(sum[i] >= 10){
				nho = 1;
				sum[i]-=10;
			}
		}
		
		if(nho == 1) printf("1");
		
		for(int i=max-1; i>=0; i--){			
			print(sum[i]);			
		}
		printf("\n");
	}
}
