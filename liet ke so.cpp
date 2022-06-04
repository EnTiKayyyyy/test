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
#define ll long long
int main()
{
	char a[1000];
	gets(a);
	int b[10]={0};
	for (int i=0;i<strlen(a);i++)
	{
		if (a[i]>='0' && a[i]<='9')
		{
			b[a[i]-'0']++;
		}
	}
	for (int j=0;j<=9;j++)
	printf("%d ",b[j]);
	return 0;
}