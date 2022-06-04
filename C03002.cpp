#include<stdio.h>
#include<math.h>
int ktnt(int n)
{	
	int check =0;
	for(int i=3;i<=sqrt(n);i=i+2)
	{
		if(n%i==0&&n%2==1){check=1;break;}
	}
	return check;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("2\n");
	for (int i=3;i<=a;i=i+2)
	{
		if (i==2)
		printf("%d\n",i);
		else
		{
			if (ktnt(i)==0)
			printf("%d\n",i);
		}
	}
	return 0;
}