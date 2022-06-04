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
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		char f[n][m];
		for(int i=0;i<n;i++) scanf("%s", &f[i]);
		long long cnt=0;
		for(int i=0;i<n;i++){
			int dem1=0, dem2=0;
			for(int j=0;j<m;j++){	
				if(f[i][j]=='0') continue;
				for(int k=0;k<m;k++){
					if(f[i][j]=='1'&&f[i][k]=='2') dem1++;
					if(f[i][j]=='2'&&f[i][k]=='1') dem1++;
				}
				for(int k=0;k<n;k++){
					if(f[i][j]=='1'&&f[k][j]=='2') dem2++;
					if(f[i][j]=='2'&&f[k][j]=='1') dem2++;
				}
				cnt+=(long long)dem1*dem2;
				dem1=0;
				dem2=0;
			} 
		}
		printf("%lld\n", cnt);
	}
	return 0;
}