/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>

struct thiSinh
{
    int mts;// mã thí sinh
    char ten[500];
    char ngaySinh[500];
    float d1,d2,d3;
    float tong;

};
void Nhap(struct thiSinh ts[], int n)
{
    int cnt = 1;
    for (int i = 0 ; i < n ; i++)
    {
        scanf("\n");
        gets(ts[i].ten);
        gets(ts[i].ngaySinh);
        scanf("%f",&ts[i].d1);
        scanf("%f",&ts[i].d2);
        scanf("%f",&ts[i].d3);
        ts[i].tong = ts[i].d1 + ts[i].d2 + ts[i].d3;
        ts[i].mts = cnt;
        cnt++;
    }
}
void Xuat(struct thiSinh ts[], int n)
{
    for (int i = 0 ; i < n ;i++)
        printf("%d %s %s %0.1f\n",ts[i].mts,ts[i].ten,ts[i].ngaySinh,ts[i].tong);
}
void Sapxep(struct thiSinh ts[], int n)
{
    for ( int i = 0 ; i < n ; i++)
    {
        for ( int j = i+1 ; j < n ; j++)
        {
            if (ts[i].tong < ts[j].tong)
            {
                struct thiSinh t = ts[i];
                ts[i] = ts[j];
                ts[j] = t;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    struct thiSinh ts[n];
    Nhap(ts,n);
    Sapxep(ts,n);
    Xuat(ts,n);
    return 0;
}
