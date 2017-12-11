#include<stdio.h>
#define LLD long long int
#define MOD 100

int main()
{
    LLD n,a,b,c; 
    int i,T;
    
    scanf("%d",&T);
    while(T--){
        scanf("%lld",&n);
        n = n % 300;
        if(n == 0) printf("00");
        
        else {
            
          a = 0;
          b = 1;
          
          for(i = 0; i < n; i++) {
            c = (a+b)%MOD;
            a = b;
            b = c;
          }
          if(a < 10) printf("0%lld",a);
          
               else  printf("%lld",a);
        }
        printf("\n");
    }
	
	return 0;
}