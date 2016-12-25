#include<stdio.h>
#define MOD 1000000007

int main()
{
	int T;
	scanf("%d", &T);
	int a,b,c,i,n,LIMIT;
	
	while(T--){
	    
	  scanf("%d", &n);
	  
	  LIMIT = 3 * n - 2;
	  a = 0; b = 1;
	  for(i = 0; i <= LIMIT; i++) {
	      
	    c = (a + b) % MOD;
	    a = b % MOD ;
	    b = c % MOD;
	  }
	  
	  printf("%d\n", c % MOD);
	}  
	  
	
	
	return 0;
}