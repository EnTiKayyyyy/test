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
int main(){
	
		char a[100]={0};
		char b[100][100]={0};

        gets(a);

        for(int i=0; i<strlen(a); i++){
            if(a[i] < 97 && a[i] != ' ') a[i] += ' ';
        }

		int n = 0;
		char* token = strtok(a, " ");
		while(token != NULL){
			strcpy(b[n], token);
			n++;
			token = strtok(NULL, " ");
		}

		for (int i=0; i<n-1; i++){
			printf("%c", b[i][0]);
		}

		printf("%s@ptit.edu.vn", b[n-1]);
		return 0;
}
