#include<stdio.h>
#include<math.h>
int main()
{
	double cd,a,b,c,delta;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a!=0&&b!=0&&c!=0)
	{
		if (a==0)
		{
			if (b==0)
			printf("NO");
			else
			printf("%.2lf", -c/b);
		}
		else
		{
			delta =(double) b*b-4*a*c;
			if (delta<0)
			printf("NO");
			if (delta==0)
			printf("%.2lf",(double)-b/2/a);
			if (delta>0)
			{
				cd=(double)sqrt(delta);
				printf("%.2lf\t%.2lf",(double)(-b+cd)/2/a,(double)(-b-cd)/2/a);
			}
		}
	}
	return 0;
}