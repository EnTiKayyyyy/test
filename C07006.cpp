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
typedef struct toaDo
{
    double x;
    double y;
} tDo;

double canh(double x1, double x2, double y1, double y2)
{
    double xb = pow(x2-x1, 2);
    double yb = pow(y2-y1, 2);
    double c = sqrt(xb+yb);
    return c;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        tDo diem[5];
        for (int i = 1; i < 4; i++)
        {
            scanf("%lf%lf", &diem[i].x, &diem[i].y);
        }
        double canh1, canh2, canh3;
        canh1 = canh(diem[3].x, diem[2].x, diem[3].y, diem[2].y);
        canh2 = canh(diem[3].x, diem[1].x, diem[3].y, diem[1].y);
        canh3 = canh(diem[1].x, diem[2].x, diem[1].y, diem[2].y);
        if (canh2 >= canh1 + canh3 || canh1 >= canh2 + canh3 || canh3 >= canh1 + canh2 || (canh1 == canh2 && canh2 == canh3 && canh3 == 0))
            printf("INVALID\n");
        else
        {
            double p = (canh1+canh2+canh3)/2;
            double S = sqrt(p*(p-canh1)*(p-canh2)*(p-canh3));
            printf("%.2lf\n", S);
        }
    }
}