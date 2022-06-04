/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
#define test long long t; scanf("%lld",&t) ; while (t--)
int cmp(const void *a , const void *b)
{
    char* x = (char*)a;
    char* y = (char*)b;
    return strcmp(x,y);
}
int main()
{
    test
    {
        scanf("\n");
        char s1[1050];
        char s2[1050];
        gets(s1);
        gets(s2);
        char a1[500][500];
        char a2[500][500];
        int n1 = 0 , n2 = 0;
        char *t1 = strtok(s1," ");
        while (t1 != NULL)
        {
            strcpy(a1[n1],t1);
            n1++;
            t1 = strtok(NULL," ");
        }
        char *t2 = strtok(s2," ");
        while (t2 != NULL)
        {
            strcpy(a2[n2],t2);
            n2++;
            t2 = strtok(NULL," ");
        }
        //
        qsort(a1,n1,sizeof(a1[0]),cmp);
        //
        for (int i = 0 ; i < n1 ; i++)
        {
            while (strcmp(a1[i],a1[i+1]) == 0) i++;
            int ok = 0;
            for (int j = 0 ; j < n2  ; j++)
            {
                if (strcmp(a1[i],a2[j]) == 0)
                {
                    ok  = 1;
                    break;
                }
            }
            if (ok == 0) printf("%s ",a1[i]);
        }
        printf("\n");
    }
}