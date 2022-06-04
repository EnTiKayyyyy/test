#include<stdio.h>
#include<math.h>
int main()
{
	int a,c,d,i,b;
	scanf("%d",&a);
	int temp=a;
	c=a%10;
	i=0;
	while (temp>=10)
	{
		i=i+1;
		temp=temp/10;
	}
	d=temp;
	b=a-c+d-d*pow(10,i)+c*pow(10,i);
	printf("%d",b);
	return 0;
}