#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=1;i<=b;i++)
	printf("*");
	printf("\n");
	for (int k=0;k<=a-2;k++)
	{
		for (int j=a;j>=a-k;j--)
		printf("~");
		for (int m=1;m<=b;m++)
		printf("*");
		printf("\n");
	}
	return 0;
}