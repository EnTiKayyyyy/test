#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	int temp=a;
	i=1;
	while (temp>=10)
	{	
		i=i+1;
		temp=temp/10;
	}
	printf("%d",i);
	return 0;
}