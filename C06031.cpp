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
	char s[1005];
	scanf("%s",s);
	int lis[strlen(s)];
	for (int i = 0 ; i < strlen(s) ; i++)
	{
		lis[i] = 1;
		for (int j = 0 ; j < i ; j++)
		{
			if (s[i] > s[j] && lis[i] < lis[j]+1) lis[i] = lis[j] +1;
		}
	}
	int res = 0;
	for (int i = 0 ; i < strlen(s) ; i++)
	{
		if (lis[i] > res) res = lis[i];
	}
	printf("%d",26-res);
}