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
#define scan(n) scanf("%d", &n)
#define print(n) printf("%lf\n", n)
typedef struct{
    char name[50];
    double m1, m2, m3, sum;
    int stt;
} sinhVien;

int main(){
    int selection;
    sinhVien sv[10000];
    int k = 0;
    int fix[10000];
    int fixIndex = 0;

    while(1){

        scanf("%d", &selection);

        if(selection == 1){
            int n;
            scan(n);
            printf("%d\n", n);

            for(int i=0; i<n; i++){
                sv[k].stt = k+1;
                scanf("\n");
                gets(sv[k].name);
                scanf("%lf %lf %lf", &sv[k].m1, &sv[k].m2, &sv[k].m3);
                
                sv[k].sum = sv[k].m1 + sv[k].m2 + sv[k].m3;
                
                k++;
            }
            
            continue;
        }
        else if(selection == 2){
            char temp[50];
            double tmp1, tmp2, tmp3;
            int index;

            scan(index);
            fix[fixIndex] = index;
            fixIndex++;
            printf("%d\n", index);
            scanf("\n");

            gets(temp);
            scanf("%lf %lf %lf", &tmp1, &tmp2, &tmp3);
            strcpy(sv[index-1].name, temp);
            sv[index-1].m1 = tmp1;
            sv[index-1].m2 = tmp2;
            sv[index-1].m3 = tmp3;
            sv[index-1].stt = index;
            sv[index-1].sum = tmp1 + tmp2 + tmp3;
        }
        else if(selection == 3){
            for(int i=0; i<fixIndex; i++){
                int j = fix[i]-1;
                printf("%d %s %.1lf %.1lf %.1lf\n", sv[j].stt, sv[j].name, sv[j].m1, sv[j].m2, sv[j].m3);
            }
            break;
        }
    }
    return 0;
}