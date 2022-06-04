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
    int t;
    scanf("%d",&t);
    while (t--)
    {
        float xA , yA , xB , yB , xC , yC;
        scanf("%f%f%f%f%f%f",&xA,&yA,&xB,&yB,&xC,&yC);
        float d1 = sqrt((xA-xB)*(xA-xB) + (yA-yB)*(yA-yB));
        float d2 = sqrt((xB-xC)*(xB-xC) + (yB-yC)*(yB-yC));
        float d3 = sqrt((xA-xC)*(xA-xC) + (yA-yC)*(yA-yC));
        if (d1 + d2 <= d3 || d2 + d3 <= d1 || d1 + d3 <= d2) printf("INVALID\n");
        else printf("%0.3f\n",d1+d2+d3);
    }
}