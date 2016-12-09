#include <stdio.h>
#include <string.h>
int main()
{
	int T,f,i,a,b,len;
	char str[100];
	scanf("%d", &T);
	while(T--){
	    f = 0; a = 0; b = 0;
	    scanf(" %[^\n]", str);
	    len = strlen(str); 
	    for(i = 0; i < len; i++){
	        if(str[i] == '=') f = 1;
	        else if(str[i] >= 48 && str[i] <= 57){
	            
	             int num = str[i] - 48;
	             if(f == 0) a = (a*10) + num;
	                 else   b = (b*10) + num;
	        }
	    }
	    printf("%d\n", (b-a));
	}
	return 0;
}