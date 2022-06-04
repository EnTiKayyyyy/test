/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int ucln(int a,int b)
{
	if (b==0)
	return a;
	return ucln(b, a % b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=a;i<=b-1;i++)
	{
		for (int j=i;j<=b;j++)
		{
			if (ucln(i,j)==1)
			printf("(%d,%d)\n",i,j);
		}
	}
	return 0;
}