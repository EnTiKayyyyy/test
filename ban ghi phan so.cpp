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
struct Phanso 
    { 
    	int tuso; 
        int mauso;
    }; 
Phanso sum(Phanso,Phanso);
int ucln(int a,int b)
{
	if (b==0)
	return a;
	return ucln(b, a % b);
}
int check(a,b)
{
	if (ucln(a,b)==1)
	return 1;
	return 0;
}
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	int a[100],b[100];
	for (i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	
	for (j=0;j<n-1;j++)
	{
		Phanso f1={a[j], b[j]};
    	Phanso f2 ={a[j+1], b[j+1]};
    	Phanso ketqua = sum(f1, f2);
		printf("%d/%d ",ketqua.tuso,ketqua.mauso);
	}
}
Phanso sum(Phanso f1, Phanso f2) 
{ 
    Phanso ketqua={(f1.tuso * f2.mauso) + (f2.tuso * f1.mauso), f1.mauso * f2.mauso}; 
    return ketqua; 
} 