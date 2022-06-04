#include<stdio.h>
#include<math.h>
int snt(int n) 
{
    if (n < 2) 
	{
        return 0;
    }
    int i;
    int s = sqrt(n);
    for (i=2;i<=s;i++) 
	{
        if (n % i == 0) 
        return 0;
    }
    return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",snt(n));
	return 0;
}