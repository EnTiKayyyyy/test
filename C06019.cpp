/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <string.h>
#include <stdio.h>
#include <ctype.h>
void chuanHoa(char *name)
{
    int t = strlen(name);
    for ( int i = 0 ; i < t ; i++) {
        if ( name[i] >= 'A' && name[i] <= 'Z') name[i] = tolower('name[i]');
    }
    
}
int main()
{
    char a[10000];
    gets(a);
    char b[50][50];
    int idx = 0;
    char *t;
    t = strtok(a, " ");
    while(t != NULL) 
    {
        strcpy(b[idx], t);
        
        chuanHoa(b[idx]);

        idx++;
        t = strtok(NULL," ");
    }
    for ( int i = 0 ; i < idx ; i++) {
        if (i == idx - 1) printf("%s@ptit.edu.vn",b[i]);  
        else printf("%c",b[i][0]);  
    }
}