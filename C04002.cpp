#include<stdio.h>
#include<math.h>
int snt(int n) 
{
	int s=sqrt(n);
	int i;
	if (n < 2) 
	{
        return 0;
    }
	for (i=2;i<=s;i++)
	{
        if (n % i == 0) 
        {
			return 0;
			break;
    	}
	}
    return 1;
}
int main()
{
	int n,a,c[100];
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for (int j=0;j<a;j++)
		scanf("%d",&c[j]);
		for (int k=0;k<a;k++)
		{
			if (snt(c[k])==1)
			printf("%d\t",c[k]);
		}
		printf("\n");
	}
	return 0;
}