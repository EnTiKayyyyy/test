/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define test long long t; scanf("%lld",&t) ; while (t--)

struct matHang
{
    int ma;
    char ten[100];
    char nhom[100];
    float mua;
    float ban;
    float loiNhuan;
};
int main()
{
    struct matHang mh[1000];
    int n;
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++)
    {
        scanf("\n");
        gets(mh[i].ten);
        gets(mh[i].nhom);
        scanf("%f%f",&mh[i].mua,&mh[i].ban);
        mh[i].loiNhuan = mh[i].ban - mh[i].mua;
        mh[i].ma = i+1;
    }
    
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i+1 ; j < n ; j++)
        {
            if (mh[i].loiNhuan < mh[j].loiNhuan)
            {
                struct matHang tmp;
                tmp = mh[i];
                mh[i] = mh[j];
                mh[j] = tmp;
            }
        }
    }

    for (int i = 0 ; i < n ; i++)
    {
        printf("%d %s %s %0.2f\n",mh[i].ma,mh[i].ten,mh[i].nhom,mh[i].loiNhuan);
    }
}