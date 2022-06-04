/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#define test long long t; scanf("%lld", &t); while (t--)
int main()
{
	int N, M;
    scanf("%d%d", &N, &M);

    int *a = (int *)malloc(N * sizeof(int));
    
    srand((int)time(0));
    for (int i=0;i<=N-1;i++)
    {
        a[i] = rand() % M;
    }

    int m = a[0];
    for (int i=0;i<=N-1;i++)
    {
        if(m > a[i]) 
		m = a[i]; 
    }
    printf("Gia tri lon nhat la: %d\n", m);

    m = a[0];
    for (int i=0;i<=N-1;i++)
    {
        if(m < a[i]) m = a[i]; 
    }
    printf("Gia tri nho nhat la: %d\n", m);

    double avg = 0;
    for (int i=0;i<=N-1;i++)
    {
	    avg = avg + a[i];
    }
    avg = 1.0 * avg / N;
    printf("Gia tri trung binh la: %.2lf\n", avg);

    if(N%2 == 1) 
    {
        printf("Gia tri trung vi la: %d\n", a[N/2]);
    }
    else 
    {
        printf("Gia tri trung vi la: %.2lf\n", 1.0*(a[N/2] + a[N/2-1])/2);
    }

    double D = 0;
    for (int i=0;i<=N-1;i++)
    {
        D += (a[i] - avg) * (a[i] - avg);
    }
    D = (double) D / N;
    printf("Binh phuong do lech chuan la: %.2lf\n", D);
	return 0;
}