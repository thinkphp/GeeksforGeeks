#include<stdio.h>
#define LLI long long int

int main()
{  
    int T;        
    LLI n;     
    
    scanf("%d", &T);
    
    while(T--){
        
        scanf("%lld", &n);
        
        if(n == 0) printf("NO");
        
        else if((n & (n-1)) == 0) printf("YES");
        
                 else      
                             printf("NO");
                             
        printf("\n");                     
    } 
	return 0;
}