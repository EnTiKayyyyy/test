/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a=1;
	int j;
	for(int i=1;i<=n;i++)
	{
		for (j=a;j<i+a;j++)
		{
			if(i%2==0)
			printf("%c\t",2*a+i-j-1+96);
			else
			printf("%c\t",j+96);
		}
		a=j;
		printf("\n");
	}
	return 0;
	
}
