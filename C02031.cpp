/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int j=n-i;j<=2*(n-i)-1;j++)
		printf("%c",j+63);
		printf("\n");
	}
	return 0;
}