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
    int running = 1;
    while(running){
        int n;
        scanf("%d", &n);
        if(n == 0){
            return 0;
        }
        char s1[200];
        char s2[200];
        char s[400];
        scanf("%s", &s1);
        scanf("%s", &s2);
        scanf("%s", &s);
        char res[400] = "";
        int index = 0;
        int count = 0;
        int check = 1;
        while(strcmp(res, s) != 0){
            count++;
            for(int i = 0; i < n; i++){
                res[index] = s2[i];
                res[index + 1] = s1[i];
                index += 2;
            }

            for(int i = 0; i < n ;i++){
                s1[i] = res[i];
            }

            for(int i = 0; i < n; i++){
                s2[i] = res[i + n]; 
            }
            index = 0;
            if(count == n * n){
                printf("-1\n");
                check = 0;
                break;
            }
        }
        if(check){
            printf("%d\n", count);
        }
    }
    return 0;
}