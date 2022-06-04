/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define test int t;scanf("%d",&t);while(t--)
void chuanHoa(char *name)
{
    if (name[0] >= 'a' && name[0] <= 'z') name[0] -= 32;
    int t = strlen(name);
    for ( int i = 1 ; i < t ; i++) {
        if ( name[i] >= 'A' && name[i] <= 'Z') name[i] += 32;
    }
    
}
int main()
{
    test
    {
        scanf("\n");
        char str[10000];
        gets(str);
        char a[50][50];
        int idx = 0;
        char *t;
        t = strtok(str, " ");
        while(t != NULL) 
        {
            strcpy(a[idx], t);
            //
            chuanHoa(a[idx]);
            //
            idx++;
            t = strtok(NULL," ");
        }
        for ( int i = 0 ; i < idx ; i++) {
            if (i == idx - 1) printf("%s",a[i]);  
            else printf("%s ",a[i]);  
        }
        printf("\n");
    }
}