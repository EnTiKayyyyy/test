/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int stn(long long a)
{ 
	long long c=0,k=0,temp=a; 
	while(temp>0)
	{ 
		c=temp%10+c*10; 
		temp=temp/10; 
		k++;
	}
	if(c==a) 
	return 1; 
	return 0;
} 
int kt(long long a)
{ 
	long long b; 
	while(a>0)
	{ 
		b=a%10; 
		a=a/10; 
		if(b==6)
		{ 
			return 1; 
			break; 
		} 
	}
	return 0; 
} 
int tong(long long a) 
{ 
	long long b,i=0; 
	while(a>0)
	{ 
		b=a%10; 
		a=a/10; 
		i=i+b; 
	}
	if(i%10==8) 
	return 1; 
	return 0;
} 
int main()
{ 
	long long a,b,dem=0; 
	scanf("%lld %lld",&a,&b); 
	if(a>b)
	{ 
		long long c=a; 
		a=b; 
		b=c; 
	} 
	for(long long i=a;i<=b;i++)
	{ 
		if(stn(i)==1&&kt(i)==1&&tong(i)==1)
		{ 
			printf("%lld ",i);
		} 
	} 
}