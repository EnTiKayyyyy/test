/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf("%c\t",i+64);
		temp=i;
		for (int j=2;j<=i;j++)
		{
			printf("%c\t",temp+n+1-j+64);
			temp=temp+n+1-j;
		}
		printf("\n");
	}
	return 0;
}