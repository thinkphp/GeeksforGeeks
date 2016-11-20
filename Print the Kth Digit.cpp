#include <stdio.h>
#include <math.h>
int main()
{
	int T,a,b,k,temp;
	long int c;
	
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d", &a, &b, &k);
	    c = pow(a,b);
	    
	    while(k>0){
	        
	        temp = c % 10;
	        c = c / 10;
	        k--;
	    }
	    
	    printf("%d\n",temp);
	}
	return 0;
}