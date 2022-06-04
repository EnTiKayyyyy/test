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
typedef struct{
	char name[252];
	char group[252];
	float buyPrice;
	float sellPrice;
	int stt;
} product;

void swap(product* a, product* b){
	product temp;
	temp = *a;
	*a = *b; 
	*b = temp;
}

void output(product a){
	printf("%d %s %s %.2f\n", a.stt, a.name, a.group, a.sellPrice-a.buyPrice);
}

int main(){
	int n=3;
	scanf("%d", &n);
	product a[n];
	for(int i=0; i<n; i++){
		a[i].stt = i+1;
		scanf("\n");
		fgets(a[i].name, 252, stdin);
		a[i].name[strlen(a[i].name) - 1] = '\0';
		fgets(a[i].group, 252, stdin);
		a[i].group[strlen(a[i].group) - 1] = '\0';
		//
		scanf("%f %f", &a[i].buyPrice, &a[i].sellPrice);
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((a[i].buyPrice-a[i].sellPrice) < (a[j].buyPrice-a[j].sellPrice)){
				swap(&a[i], &a[j]);
			}
		}
	}
	
	for(int i=0; i<n; i++){
		output(a[i]);
	}
	return 0;
}
