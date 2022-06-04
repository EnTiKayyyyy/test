#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d",&a);
	for (int i=1;i<=a-1;i++)
	{
		for (int j=1;j<=i;j++)
		if (j==1||j==i)
		printf("*");
		else
		printf(".");
		printf("\n");
	}
	for (int i=1;i<=a;i++)
	printf("*");
	return 0;
}