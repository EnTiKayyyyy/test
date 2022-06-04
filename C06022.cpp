/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include <stdio.h>
#include <string.h>

void chuanHoa(char *s)
{
    for (int i = 0 ; i < strlen(s) ; i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
}
int soSanh(char a[] , char b[])
{
    chuanHoa(a);
    chuanHoa(b);
    if (strcmp(a,b) == 0) return 1;
    return 0;
}
int main()
{
    int dem = 1;
    int t;
    scanf("%d",&t); 
    while (t--)
    {
        char s1[1005];
        scanf("\n");
        gets(s1);
        char s2[1005];
        scanf("%s",s2);
        //
        printf("Test %d: ",dem++);
        char a[100][100];
        char b[100][100];
        int n = 0;
        char* t = strtok(s1," ");
        while (t != NULL)
        {
            strcpy(a[n],t);
            strcpy(b[n],t);
            n++;
            t = strtok(NULL," ");
        }
        for (int i = 0 ; i < n ; i++)
        {
            if (soSanh(a[i],s2) != 1) printf("%s ",b[i]);
        }
        printf("\n");
    }
}