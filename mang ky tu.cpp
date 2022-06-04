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
	int cnt[10]={0};
	gets(a);
	int ok = 1;
	int i;
	for (i=0;i<strlen(a);i++)
	{
		switch (a[i])
		{
			case '(': cnt[0]++; break;
			case ')': cnt[1]++; break;
			case '{': cnt[2]++; break;
			case '}': cnt[3]++; break;
			case '[': cnt[4]++; break;
			case ']': cnt[5]++; break;
			case '\'': cnt[6]++; break;
			case '\"': cnt[8]++; break;
		}
	}
	for (i=0;i<=8;i+=2)
	{
		if (i<=4)
		{
			if (cnt[i]!=cnt[i+1])
			{
				ok=0; break;
			}
		}
		else
		if (cnt[i]%2!=0)
		{
			ok=0;
			break;
		}
	}
	printf("%d",ok);
}