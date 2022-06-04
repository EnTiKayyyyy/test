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
int po(int p){
    int res = 1;
    while(p--){
        res*=10;
    }
    return res;
}

int isNum(char c){
    if(c <= '9' && '0' <= c) return 1;
    else return 0;
}

int main(){
    int t;
    scan(t);
    while(t--){
        scanf("\n");
        int arr[15000] = {};
        char s1[15000];
        char s2[15000];
        
        fgets(s1, 15000, stdin);
        s1[strlen(s1)] = '\0';
        scanf("\n");
        fgets(s2, 15000, stdin);
        s2[strlen(s2)] = '\0';

        int temp = 0;
        int check = 1;
        int k, l, tmp1, tmp2;
        int max = 0;

        for(int i=0; i<strlen(s1); i++){
            if(s1[i] == '*'){
                k = i-1;
                int pow=0;
                tmp1=0;
                tmp2=0;
                while(isNum(s1[k]) == 1){
                    tmp1 += (s1[k]-'0') * po(pow);
                    pow++;
                    k--;
                }

                l = i+3;
                while(isNum(s1[l]) == 1){
                    tmp2 = tmp2*10 + s1[l]-'0';
                    l++;
                }

                //printf("%d %d\n", tmp1, tmp2);
                arr[tmp2] += tmp1;
                if(max < tmp2) max = tmp2;
            }
            
        } 

        for(int i=0; i<strlen(s2); i++){
            if(s2[i] == '*'){
                k = i-1;
                int pow=0;
                tmp1=0;
                tmp2=0;
                while(isNum(s2[k]) == 1){
                    tmp1 += (s2[k]-'0') * po(pow);
                    pow++;
                    k--;
                }

                l = i+3;
                while(isNum(s2[l]) == 1){
                    tmp2 = tmp2*10 + s2[l]-'0';
                    l++;
                }

                //printf("%d %d\n", tmp1, tmp2);
                arr[tmp2] += tmp1;
                if(max < tmp2) max = tmp2;
            }
        } 

        check = 0;

        for(int i=max; i>=0; i--){
            if(arr[i] > 0){
                if(!check){
                    printf("%d*x^%d", arr[i], i);
                    check=1;
                }
                else printf(" + %d*x^%d", arr[i], i);
            } 
        }
        printf("\n");

    }
    
}