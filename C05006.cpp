#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int n[51][51];
    for (int i=1;i<=a;i++)
    {
        for (int j=1;j<=b;j++)
        scanf("%d",&n[i][j]);
    }
    int c,d;
    scanf("%d%d",&c,&d);
    int temp[51][51];
    for (int k=1;k<=b;k++)
    {
        temp[c][k]=n[d][k];
        n[d][k]=n[c][k];
        n[c][k]=temp[c][k];
    }
    for (int v=1;v<=a;v++)
    {
        for (int x=1;x<=b;x++)
        printf("%d ",n[v][x]);
        printf("\n");
    }
    return 0;
}