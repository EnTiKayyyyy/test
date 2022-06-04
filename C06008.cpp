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
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long
int main()
{
    char a[105];
    gets(a);
    char b[105][105];
    int ntk = 0;
    char *t;
    t = strtok(a," ");
    while(t != NULL) 
    {
        strcpy(b[ntk], t);
        ntk++;
        t = strtok(NULL," ");
    }
    for ( int i = 0 ; i <= ntk; i++) {
        for ( int j = i + 1 ; j <= ntk ; j ++) 
		{
            if (strcmp(b[i],b[j]) == 0)
			{
            	strcpy(b[j],"\0");
            }
        }
    }
    for ( int i = 0 ; i <= ntk ; i++) 
    {
    	if (strcmp(b[i],"\0") != 0) 
		printf("%s ",b[i]);
	}
	return 0;
}