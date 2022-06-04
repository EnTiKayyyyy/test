/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#define test long long t; scanf("%lld", &t); while (t--)
int tohop(int k, int n) 
{
    if ( k == 0 || k == n ) return 1;
    else
        if ( k == 1 ) return n;
        else return tohop(k - 1, n - 1) + tohop(k, n - 1);
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		printf ("%d ",tohop(j,i));
		printf("\n");
	}
	return 0;
}