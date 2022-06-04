#include<stdio.h>
#include<math.h>
int main()
{
	int a,tich;
	scanf("%d",&a);
	tich=1;
	while (a>0)
	{
		tich=tich*(a%10);
		a=a/10;
	}
	printf("%d",tich);
	return 0;
}