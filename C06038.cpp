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
void reverse(char a[], int n){
	int l=0,r=n-1;
	while(l<r){
		char x=a[l];
		a[l]=a[r];
		a[r]=x;
		l++;
		r--;
	}
}
void nhan(char a[], char b[], int n, int k){
	int nho=0, tmp;
	reverse(a, n);
	for(int i=0;i<n;i++){
		tmp=(a[i]-'0')*k+nho;
		b[i]=tmp%10+'0';
		nho=tmp/10;
	}
	reverse(a, n);
	reverse(b,n);
}
int check(char a[], char b[], int n){
	int idx;
	for(int i=0;i<n;i++){
		if(a[i]==b[0])
		{
			if(i<n-1){
				if(a[i+1]==b[1]){
					idx=i;
					break;
				}
			}
			else idx=i;
		}
	}
	int j=0;
	for(int i=idx;i<n;i++){
		if(a[i]!=b[j]) return 0;
		else j++;
	}
	int k=0;
	for(int i=j;i<n;i++){
		if(a[k]!=b[i]) return 0;
		else k++;	
	}
	return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    	scanf("\n");
    	char a[65];
    	gets(a);
    	int n=strlen(a);
    	char b[n];
    	int kq=0;
    	for(int z=2;z<=n;z++){
    		nhan(a, b, n, z);
    		if(check(a, b, n)==0){
    			kq=1;
    			break;
			}
		}
		if(kq==1) printf("NO\n");
		else printf("YES\n");
	}
    return 0;
}