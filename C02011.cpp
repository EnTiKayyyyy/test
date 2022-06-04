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
	if (a<=b)
	{
		for (int i=0;i<a;i++)
		{
			for (int j=i+1;j<=b;j++)
			printf("%d",j);
			for (int k=1;k<=i;k++)
			printf("%d",b-k);
			printf("\n");
		}
	}
	else
	{
	for (int i=0;i<a;i++)
	{
	
		if (i<=b-1)
		{
		for (int j=i+1;j<=b;j++)
			printf("%d",j);
			for (int k=1;k<=i;k++)
			printf("%d",b-k);
		}
		else
		{
			for (int z=0;z<=b-1;z++)
			printf("%d",i-z+1);
		}
		printf("\n");	
	}
}
	return 0;
}