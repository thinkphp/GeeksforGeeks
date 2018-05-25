#include<stdio.h>
#include<string.h>
int main()
{
	int i,//iterator for loop
	    T,//test cases
	    n;//number of items
	char str[100];    
	
	scanf("%d",&T);
	
	while(T--) {
	    
	    scanf("%s", str);
	    
	    n = strlen(str);
	    
	    for(i = 0; i < n; ++i) {
	        
	        if(str[i] != str[i+1]) {
	            
	            printf("%c",str[i]);
	        }
	    }
	    
	    printf("\n");
	}
	return 0;
}