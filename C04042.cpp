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
	test
	{
		int n,check=1;
		scanf("%d",&n);
		int a[n];
		int i,j;
		for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for (i=0;i<n-1;i++)
		{
			for (j=i+1;j<n;j++)
			{
				if (a[i]-a[j]==0)
				{
					printf("%d\n",a[i]);
					check=0;
					break;
				}
			}
			if (check==0) break;	
		}
		if (check!=0) printf("NO\n");
	}
	return 0;
}