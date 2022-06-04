#include<stdio.h> 
int main()
{ 
	int t,n,i,dem; 
	scanf("%d", &t); 
	while (t--)
	{ 
		scanf("%d",&n); 
		i=1; 
		dem = 0; 
		while (i<=n/i) 
		{ 
			if(n%i==0)
			{ 
				if (i%2==0) 
				dem++; 
				if (n/i%2==0) 
				dem++; 
				if (n/i==i && i%2==0) 
				dem--; 
			} 
			i++; 
		} 
		printf ("%d\n", dem); 
	} 
	return 0; 
}