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
int cnt = 1;
struct sinhVien 
{
    int msv;
    char ten[100];
    float a,b,c;
    float tong;
};
void themMoi(struct sinhVien sv[])
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    while (n--)
    {
        scanf("\n");
        gets(sv[cnt].ten);
        scanf("%f%f%f",&sv[cnt].a,&sv[cnt].b,&sv[cnt].c);
        sv[cnt].tong = sv[cnt].a + sv[cnt].b + sv[cnt].c;
        sv[cnt].msv = cnt;
        cnt++;
    }
}
void capNhatDiem(struct sinhVien sv[])
{
    int n;
    scanf("%d",&n);
    scanf("\n");
    gets(sv[n].ten);
    scanf("%f%f%f",&sv[n].a,&sv[n].b,&sv[n].c);
    sv[n].tong = sv[n].a + sv[n].b + sv[n].c;
    printf("%d\n",sv[n].msv);
}
void Sapxep(struct sinhVien sv[], int n)
{
    for ( int i = 1 ; i < n ; i++)
    {
        for ( int j = i+1 ; j < n ; j++)
        {
            if (sv[i].tong > sv[j].tong)
            {
                struct sinhVien t = sv[i];
                sv[i] = sv[j];
                sv[j] = t;
            }
        }
    }
    for ( int i = 1 ; i < n ; i++) printf("%d %s %0.1f %0.1f %0.1f\n",sv[i].msv,sv[i].ten,sv[i].a,sv[i].b,sv[i].c);

}
void hienThiDanhSach(struct sinhVien sv[])
{
    Sapxep(sv,cnt);
}
int main()
{
    int n;
    struct sinhVien sv[1000];
    do
    {   
    scanf("%d",&n);
    if ( n == 1) themMoi(sv);
    if ( n == 2) capNhatDiem(sv);
    if ( n == 3) hienThiDanhSach(sv);
    }
    while ( n != 3);
}