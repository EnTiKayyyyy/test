#include<stdio.h>
#include<math.h>
int roundup(float a)
{
	int b=round(a);
	if (b>=a) {return b;} else {return b+1;}
}
	int roundown(float a)
{
	int b= round(a);
	if (b<=a) {return b;} else { return b-1;}
}


int main()
{
	int m,n; scanf("%d %d",&m,&n);
	m=roundup(sqrt(m));
	n=roundown(sqrt(n));
	printf("%d\n",n-m+1);
	for (int i=m;i<=n;i++)
	{
		printf("%d\n",i*i);
	}
}