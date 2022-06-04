/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define test long long t; scanf("%lld", &t); while (t--)
int main()
{
	test
	{
		scanf("\n");
		char a[205];
		gets(a);
		int dem=1;
		for (int i=0; i < strlen(a)-1;i++)
		{
			if (a[i]==' '&&a[i+1]!=' ')
			dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}