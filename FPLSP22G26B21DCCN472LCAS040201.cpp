/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include <ctype.h>
#define test long long t; scanf("%lld", &t); while (t--)
int zzz(const void*a , const void *b)                                                            
{
	int* x = (int*)a;
	int* y = (int*)b;
	return *x-*y;
}
int main()
{
	int n;
	scanf("%d",&n);
	int A[n];
	int* aptr;
	aptr = A;
	int min = 100000000, max = -100000000 ;
	float avg = 0;

	for (int i = 0 ; i < n ; i++)
	{
		scanf("%d",aptr+i); 
		if (max < *(aptr+i)) max = *(aptr+i);
		if (min > *(aptr+i)) min = *(aptr+i);
		avg += *(aptr+i);
	} 
	avg /= n;
	printf("Gia tri lon nhat la : %d\n",max);
	printf("Gia tri nho nhat la : %d\n",min);
	printf("Gia tri trung binh la : %0.2f\n",avg);
	qsort(A,n,sizeof(int),zzz);
	int k = n/2;
	float tv;
	if (n % 2 == 0){
        tv = (A[k] + A[k + 1]) / 2;
    }
    if (n % 2 != 0){
        tv = A[k];
    }
    printf("Gia tri trung vi la : %0.2f\n",tv);
    float SD;
    for (int i = 0 ; i < n ; i++)
    {
    	float tmp = *(aptr+i) - avg;
    	SD += tmp*tmp;
	}
	SD /= (n-1);
	printf("Binh phuong do lech chuan la : %0.2f",SD);
	return 0;	
}
