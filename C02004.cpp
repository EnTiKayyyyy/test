#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for (int v=1;v<=a-1;v++)
	printf("~");
	for (int b=1;b<=a;b++)
	printf("*");
	printf("\n");
	for (int i=2;i<=a-1;i++)
	{
		for (int j=1;j<=a-i;j++)
		printf("~");
		for (int k=1;k<=a;k++)
		{
			if (k==1||k==a)
			printf("*");
			else printf(".");
		}
		printf("\n");
	}
	for (int x=1;x<=a;x++)
	printf("*");
	return 0;
}