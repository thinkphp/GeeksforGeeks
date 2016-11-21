#include<stdio.h>

int main()
{
	int i,j,T,N;
	char str[100], ch;
	scanf("%d", &T);
	while(T--){
	    scanf("%d", &N);
	    scanf("%s", str);
	    for(i = 0; str[i] != '\0'; i++) {
	        for(j = i + 1; str[j] != '\0';j++) {
	            if(str[i] > str[j]) {
	                ch = str[i];
	                str[i] = str[j];
	                str[j] = ch;
	            }
	        }
	    }
	    for(i = 0; str[i] != '\0'; i++) printf("%c",str[i]);
	    printf("\n");
	}
	return 0;
}