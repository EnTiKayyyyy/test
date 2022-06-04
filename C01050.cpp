#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=1;i<=a;i++)
	printf("*");
	printf("\n");
	for (int j=1;j<=b-2;j++)
	{
		printf("*");
		for (int k=1;k<=a-2;k++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (int i=1;i<=a;i++)
	printf("*");
	return 0;
}