#include <stdio.h>
#include <math.h>
#define ULI unsigned long int
int main()
{
	ULI a,b,k,R,count,digit;
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    
	      count=1;
	      
	      scanf("%lu %lu %lu", &a, &b, &k);    
	      
	      R = pow(a,b);
	      
	      while(R){
	        digit = R % 10;
	        
	        if(count == k) {
	            printf("%lu", digit);
	        }         
	        
	        count++;
	        
	        R /= 10;        
	      }
	      printf("\n");
	}
	
	
	return 0;
}