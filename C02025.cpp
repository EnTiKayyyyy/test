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
			for (int j=b;j>=b+1-i;j--)
			printf("%c",j+96);
			for (int k=1;k<=b-i;k++)
			printf("%c",b+1-i+96);			
			printf("\n");
		}
	}
	else
	{
		for (int i=1;i<=a;i++)
		{
			if (i<=b)
			{
				for (int j=a;j>=a+1-i;j--)
				printf("%c",j+96);
				for (int k=1;k<=b-i;k++)
				printf("%c",a+1-i+96);			
				printf("\n");
			}
			else
			{
				for (int j=0;j<b;j++)
				printf("%c",a-j+96);
				printf("\n");
			}
		}
	}
	return 0;
}