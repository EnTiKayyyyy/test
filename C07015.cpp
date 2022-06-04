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

struct ThiSinh
{
    char HoVaTen[100];
    char NgaySinh[100];
    float d1;
    float d2;
    float d3;
    float sum;
};

int main()
{
	int n;
    scanf("%d",&n);
    struct ThiSinh t[100];
    float max = 0;
    for (int i = 0 ; i < n ; i++)
    {
    	scanf("\n");
        gets(t[i].HoVaTen);
        gets(t[i].NgaySinh);
        scanf("%f%f%f",&t[i].d1,&t[i].d2,&t[i].d3);
        t[i].sum = t[i].d1 + t[i].d2 + t[i].d3;
        //
		if (t[i].sum > max) 
		max = t[i].sum;
    }
    for (int j = 0 ; j < n ; j++)
    {
        if (t[j].sum == max)
        printf("%d %s %s %0.1f\n",j+1,t[j].HoVaTen,t[j].NgaySinh,t[j].sum);
    }
    return 0;
}