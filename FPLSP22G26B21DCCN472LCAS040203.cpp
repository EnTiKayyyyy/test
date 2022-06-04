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
double GetRandom(double min,double max){
    return min + (double)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}
int main()
{
	srand((int)time(0));
	int N;
    scanf("%d", &N);
    float M,P;
    scanf("%f%f",&M, &P);

    float *a = (float *)malloc(N * sizeof(int));
    
    for (int i=0;i<=N-1;i++)
    {
        a[i] = (float) GetRandom(M,P);
    }
	
    float m = a[0];
    for (int i=0;i<=N-1;i++)
    {
        if(m > a[i]) 
		m = a[i]; 
    }
    printf("Gia tri lon nhat la: %.2f\n", m);

    m = a[0];
    for (int i=0;i<=N-1;i++)
    {
        if(m < a[i]) m = a[i]; 
    }
    printf("Gia tri nho nhat la: %.2f\n", m);

    double avg = 0;
    for (int i=0;i<=N-1;i++)
    {
	    avg = avg + a[i];
    }
    avg = 1.0 * avg / N;
    printf("Gia tri trung binh la: %.2lf\n", avg);

    if(N%2 == 1) 
    {
        printf("Gia tri trung vi la: %.2f\n", a[N/2]);
    }
    else 
    {
        printf("Gia tri trung vi la: %.2f\n", 1.0*(a[N/2] + a[N/2-1])/2);
    }

    double D = 0;
    for (int i=0;i<=N-1;i++)
    {
        D += (a[i] - avg) * (a[i] - avg);
    }
    D = (float) D / N;
    printf("Binh phuong do lech chuan la: %.2f\n", D);
	return 0;
}