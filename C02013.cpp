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
		for (int i=1;i<=a;i++)
		{
			for (int j=i;j>=1;j--)
			printf("%d",j);
			for (int k=1;k<=b-i;k++)
			printf("%d",1+k);
			printf("\n");
		}
	}
	else
	{
		for (int i=1;i<=a;i++)
		{
			if (i<=b)
			{
				for (int j=i;j>=1;j--)
				printf("%d",j);
				for (int k=1;k<=b-i;k++)
				printf("%d",1+k);
				printf("\n");
			}
			else
			{
				for (int j=0;j<b;j++)
				printf("%d",i-j);
				printf("\n");
			}
		}
	}
	return 0;
}