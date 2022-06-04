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

	char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    char arr1[100][100];
    char arr2[100][100];
    int len1 = 0;
    int len2 = 0;
	
    char *token;
    token = strtok(s1, " ");
    while(token != NULL){
        strcpy(arr1[len1], token);
        len1++;
        token = strtok(NULL, " ");
    }
    
    char *token2 = strtok(s2, " ");
    while(token2 != NULL){
        strcpy(arr2[len2], token2);
        len2++;
        token2 = strtok(NULL, " ");
    }
     
    int k=0;
    char arr[100][100];
    bool check;
    for(int i=0; i<len1; i++){
        check = true;
        for(int j=0; j<len2; j++){
            if(strcmp(arr1[i], arr2[j])==0){
                check = false;
                break;
            }
        }
        if(check == true){
        	strcpy(arr[k], arr1[i]);
        	k++;
		}
    }

	for(int i=0; i<k-1; i++){
		for(int j=i+1; j<k; j++){
			if(strcmp(arr[i], arr[j]) > 0){
				char temp[100];
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[i]);
				strcpy(arr[i], temp);
			}
		}
	}
	
	int repeationCheck[100] = {};
	for(int i=0; i<k; i++){
		if(repeationCheck[i] == 0){
			printf("%s ", arr[i]);
			for(int j=i+1; j<k; j++){
				if(strcmp(arr[i], arr[j])==0) repeationCheck[j] = 1;
			}
		}
	}
    return 0;
}