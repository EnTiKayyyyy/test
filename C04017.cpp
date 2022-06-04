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
	int n,a[1000],dem=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (int j=0;j<n;j++)
	{
		if (snt(a[j])==1)
		dem++;
	}
	printf("%d\t",dem);
	for (int k=0;k<n;k++)
	{
		if (snt(a[k])==1)
		printf("%d\t",a[k]);
	}
	return 0;
}