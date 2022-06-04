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
int main() {
	int t;
	scanf("%d", &t);
	scanf("\n");
	while(t--){
 
		char *token;
		char arr[100];
		gets(arr);

		int len = strlen(arr);
        int k = 0;

        for(int i=0; i<len; i++){
            if(arr[0]>='a' && arr[0]<='z') arr[0] -= 32;
            if(arr[i]!=' ' && arr[i] <= 'Z' && arr[i]>='A') arr[i] += 32;
            if(arr[i]!=' ' && arr[i-1]==' '){
                if(arr[i]>=97) arr[i] -= 32;
            }
        }

		token = strtok(arr, " ");
        char ho[50];
        strcpy(ho, token);
        token = strtok(NULL, " ");
        printf("%s", token);
        token = strtok(NULL, " ");
		while(token != NULL){
			printf(" %s", token);
			token = strtok(NULL, " ");
		}
        printf(", ");
        for(int i=0; i<strlen(ho); i++){
            if(ho[i]>='a' && ho[i]<='z') ho[i] -= 32;
        }
        printf("%s\n", ho);
	}	
}
