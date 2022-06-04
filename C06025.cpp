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
	int lenA, lenB;
	int t;
	scanf("%d",&t);
	while (t--)
	{
		{
			scanf("\n");
			char a[1005], b[1005];
			scanf("%s", a);
			scanf("%s", b);
			lenA = strlen(a);
			lenB = strlen(b);
			while (lenA < lenB)
			{
				char tmp[1005] = {};
				tmp[0] = '0';
				strcat(tmp, a);
				strcpy(a, tmp);
				lenA = strlen(a);
			}
			while (lenA > lenB)
			{
				char tmp[1005] = {};
				tmp[0] = '0';
				strcat(tmp, b);
				strcpy(b, tmp);
				lenB = strlen(b);
			}
			if(strcmp(a, b) < 0)
			{
				char tmp[1005];
				strcpy(tmp, a);
				strcpy(a, b);
				strcpy(b, tmp);
				lenA = lenB;
			}
			char kq[1005] = {};
			int nho = 0, hieu;
			for(int i = lenA - 1; i >= 0; i--)
			{
				hieu = a[i] - b[i] - nho;
				if (hieu < 0)
				{
				   nho = 1;
				   hieu += 10;
				   kq[i] = hieu + '0';
				}
				else
				{
				    nho = 0;
				    kq[i] = hieu + '0';
				}
			}
			nho = 0;
			for(int i = 0; i < lenA; i++)
			{
				if(kq[i] != '0')
				{
					nho++;
					hieu = i;
					break;
				}
			}
			if(nho == 0)
				printf("0\n");
			else
			{
				for (int i = hieu; i < lenA; i++)
					printf("%c", kq[i]);
				printf("\n");
			}
		}
	}
	return 0;
}
