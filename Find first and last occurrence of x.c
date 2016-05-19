#include <stdio.h>

int main() 
{
	int T,N,a[100],i,j,
	    num,
	    max,min,c,found;
	scanf("%d",&T);
	while(T--){
	    scanf("%d", &N);
	    for(i = 0; i < N; i++) {
	        scanf("%d", &a[i]);
	    }
	    scanf("%d", &num);
	    
	    found = min = max = c = 0; 
	    
	    for(i = 0; i < N; i++) {
	        
	        if(num == a[i]) {
	            found = 1;
	            max = i;
	            c++;
	            if(c == 1) min = i;
	        }
	    }      
	    
	    (!found) ? printf("%d\n", -1) : printf("%d %d\n", min, max); 
	    
	}
}