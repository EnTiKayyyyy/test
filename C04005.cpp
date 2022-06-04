#include<stdio.h>
#include<math.h>
int max(int a,int b)
{
	int m=a;
	{
		if (a<b)
		m = b;
	}
	return m;
}

int main()
{
	int n,m,a;
	int c[100];
	scanf("%d",&m);
	for (int v=1;v<=m;v++)
	{
		scanf("%d",&n);
		for (int i=0;i<n;i++)
		scanf("%d",&c[i]);
		a=c[0];
		for (int i=1;i<n;i++)
		a=max(a,c[i]);
		printf("%d\n",a);

		for (int i=0;i<n;i++)
		{
			if (c[i]==a)
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;
}