#include<stdio.h>
#include<math.h>

int main()
{
	int m,n;
	double b;
	scanf("%d%d",&m,&n);
	int d=sqrt(m);
	int e=sqrt(n);
	if (d*d<m)
	d=d++;
	printf("%d\n",e-d+1);
	for (int i=d;i<=e;i++)
	printf("%d\n",i*i);
	return 0;
}