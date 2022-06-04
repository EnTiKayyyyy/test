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
	int n;
	scanf("%d",&n);
	int dem=0;
	int i=2;
	while (dem<n)
	{
		if (snt(i)==1)
		{
			printf("%d\n",i);
			dem=dem+1;
		}
	i=i+1;
	}
	return 0;
}
