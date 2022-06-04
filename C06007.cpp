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
int main()
{
	scanf("%n");
	char a[101],b[101];
	gets(a);
	gets(b);
	char *t;
    t = strtok(a, " ");
    while(t != NULL) 
    {
        if (strcmp(t,b) != 0) 
		printf("%s ",t);
        t = strtok(NULL," ");
    }
    return 0;
}