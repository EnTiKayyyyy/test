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
struct sinhVien
{
    int msv;
    char ten[100];
    float A,B,C;
};
struct sinhVien sv[1000];
int cnt = 0;
void themMoi()
{
    int n;
    scanf("%d",&n);
    for (int i = 0 ; i< n ; i++)
    {
        scanf("\n");
        gets(sv[i+cnt].ten);
        scanf("%f%f%f",&sv[i+cnt].A,&sv[i+cnt].B,&sv[i+cnt].C);
        sv[i+cnt].msv = i+cnt +1;
    }
    printf("%d\n",n);
    cnt += n;
}
void Sua()
{
    int n;
    scanf("%d",&n);
    scanf("\n");
    gets(sv[n].ten);
    scanf("%f%f%f",&sv[n].A,&sv[n].B,&sv[n].C);
    printf("%d\n",n);
}
void in()
{
    for (int i = 0 ; i <= cnt ; i++)
    {
        if (sv[i].A < sv[i].B && sv[i].B < sv[i].C) 
        {
            printf("%d %s %0.1f %0.1f %0.1f\n",i,sv[i].ten,sv[i].A,sv[i].B,sv[i].C);
        }
    }
}
int main()
{
    int choose;
    while (choose != 3)
    {
        scanf("%d",&choose);
        if (choose == 1) themMoi();
        if (choose == 2) Sua();
        if (choose == 3) in();
    }
}