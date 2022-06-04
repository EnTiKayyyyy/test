/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=1;i<=b;i++)
	printf("*");
	printf("\n");
	for (int j=2;j<a;j++)
	{
		for (int k=1;k<=j-1;k++)
		printf("~");
		printf("*");
		for (int z=1;z<=b-2;z++)
		printf(".");
		printf("*");
		printf("\n");
	}
	for (int x=1;x<a;x++)
	printf("~");
	for (int c=1;c<=b;c++)
	printf("*");
}