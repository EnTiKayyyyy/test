/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#define FOR(i,a,b,k) for (ll i=a;i<=b;i+=k)
#define FORD(i,a,b,k) for (ll i=a;i>=b;i-=k)
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long
ll n, len, res = 1e9;
ll s1[1000] = {0};
char s[60][60];

bool kt()
{	
	FOR(i,2,n,1) 
	{
		ll sx[1000] = {0};
		if(strlen(s[i]) != len) return 0;

		FOR(j,0,len-1,1) sx[s[i][j]]++;

		FOR(j,'a','z',1) if(sx[j] != s1[j]) return 0;
	}

	return 1;
}

ll dem(char b[])
{
	ll c = 0;
	char tmp, x[60];
	strcpy(x,b);		
	FOR(i,1,len,1) 
	{				
		if(strcmp(s[1], x) == 0) return c;		
		c++;

		tmp = x[0];
		FOR(j,0,len-2,1) x[j] = x[j+1];		
		x[len-1] = tmp;
	}

	return -1;
}

ll loading()
{
	FOR(i,1,len,1)
	{	
		ll c = i-1;
		FOR(j,2,n,1)
		{		
			ll x = dem(s[j]);
			if(x == -1) return -1;
			else c+=x;
		}

		char tmp = s[1][0];
		FOR(j,0,len-2,1) s[1][j] = s[1][j+1];		
		s[1][len-1] = tmp;

		if(res > c) res = c;
	}

	return res;
}

int main()
{
    scanf("%lld\n", &n);	
	FOR(i,1,n,1) 
	{
		scanf("%s", &s[i]);
	}

	len = strlen(s[1]);
	FOR(i,0,len-1,1) s1[s[1][i]]++;

	printf("%lld", loading());

	return 0;
}
