#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=1;i<=b;i++)
	printf("*");
	printf("\n");
	for (int k=0;k<=a-3;k++)
	{
		for (int j=a;j>=a-k;j--)
		printf("~");
		for (int m=1;m<=b;m++)
		if (m==1||m==b)
		printf("*");
		else
		printf(".");
		printf("\n");
	}
	for (int q=1;q<=a-1;q++)
	printf("~");
	for (int i=1;i<=b;i++)
	printf("*");
	return 0;
}