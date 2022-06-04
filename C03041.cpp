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
	int a,b,c,d;
	while (n--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if (a-c==b-d)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}