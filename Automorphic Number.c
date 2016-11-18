#include<stdio.h>
#define SQR(n) (n*n)
int main()
{
	int T,n,rem1,rem2,prod,flag;
	scanf("%d", &T);
	while(T--){
	    
	    scanf("%d", &n);
	    
	    prod = SQR(n);
	    
	    flag = 0;
	    while(n>0){
	        rem1 = n % 10;
	        rem2 = prod % 10;
	        if(rem1 != rem2) {flag = 1; break;}
	        n /= 10; 
	        prod /= 10;
	    }
	    if(flag == 0) {
	        
	        printf("Automorphic\n");
	        
	      } else {
	        
	        printf("Not Automorphic\n");
	     }
	 
	}      
	    
	return 0;
}