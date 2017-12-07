#include <stdio.h>
#include<string.h>
#define MAXSIZE 1000

int main() {
	
	int i, T;
	char str[MAXSIZE];
	scanf("%d",&T);
	while(T--){
	    
         fgets(str, MAXSIZE, stdin);
         scanf(" %[^\n]",str);
         int n = strlen(str), index = 0;
         for(i = 0; i < n; ++i) {
             if(str[i] != ' ') {
                 str[index++] = str[i];
             }
         }
         str[index] = '\0';
         
         printf("%s\n",str);
	}
	return 0;
}