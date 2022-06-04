#include<stdio.h> 
int main()
{ 
	int a,b; 
	scanf("%d%d",&a,&b); 
	int i,j,k; 
	for(i=1;i<=a;i++)
	{ 
		for(j=i;j<=b;j++)
		{ 
			printf("%c",j+64); 
		} 
		if(i>b)
		{ 
			printf("%c",b+64); 
			for(j=(b-1);j>0;j--)
			{ 
				printf("%c",j+64); 
			} 
		}
		else
		{ 
			for(j=(i-1);j>0;j--)
			{ 
				printf("%c",j+64); 
			} 
		} printf("\n"); 
	} 
	return 0;
}