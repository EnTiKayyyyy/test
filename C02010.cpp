#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d\t%d",&a,&b);
	if (a<b)
	{
		for (int i=1;i<=a;i++)
		{
			for (int j=i;j<=b;j++)
			printf("%d",j);
			for (int k=b+i-a-1;k>=0;k--)
			if (k==0)
			printf("\n");
			else
			printf("%d",k);
		}
	}
	else if (a>b){
	
	{
		for (int i=1;i<=a;i++)
		{
			for (int j=i;j<=b;j++)
			printf("%d",j);
			if (i<=b)
			{
				for (int k=a+i-b-2;k>=0;k--)
				if (k==0)
				printf("\n");
				else
				printf("%d",k);
			}
			else
			{
				printf("%d",i);
				for (int z=b-1;z>=1;z--)
				printf("%d",z);
			}
			
		}
	}
	}
	else if (a==b)
	{
			for (int i=1;i<=a;i++)
		{
			for (int j=i;j<=b;j++)
			printf("%d",j);
			for (int k=a+i-b-1;k>=0;k--)
			if (k==0)
			printf("\n");
			else
			printf("%d",k);
		}
	}
	return 0;
}