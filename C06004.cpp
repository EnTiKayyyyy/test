/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#define test long long t; scanf("%lld", &t); while (t--)

int main()
{
	int dem[3]={0};
	char a[100000];
	gets(a);
	for (int i=0;i<strlen(a);i++)
	{
		if (isalpha(a[i])!=0)
		dem[0]++;
		else
		{
			if (isdigit(a[i])!=0)
			dem[1]++;
			else
			dem[2]++;
		}
	}
	for (int j=0;j<3;j++)
	printf("%d ",dem[j]);
	return 0;
}