#include <stdio.h>

int main() {
	
	int T,
	    n,
	    arr[100],
	    i,
	    temp,
	    j,
	    minPos;
	
	scanf("%d",&T);
	
	while(T--) {
	    
	      scanf("%d",&n);    
	      
	      for(i = 0; i < n; i++) {
	          
	          scanf("%d",&arr[i]);
	      }       
	      
	      for(i = 0; i < n - 1; i++) {
	          
	          minPos = i;

              for(j = i + 1; j < n; j++) {
                  
                  if(arr[j] > arr[minPos]){
                      
                      temp = arr[j]^arr[minPos];
                      
                      arr[j] = temp^arr[j];                      
                      
                      arr[minPos] = temp^arr[minPos];
                  }
              }
	      }      
	      
          for(i = 0; i < n; i++) {
              if(arr[i] % 2 != 0) printf("%d ", arr[i]);
          }          
	    
	      for(i = n-1; i >= 0; i--) {
              if(arr[i] % 2 == 0) printf("%d ", arr[i]);
          }          

          printf("\n");   
	}
	return (0);
}


