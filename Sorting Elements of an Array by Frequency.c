#include<stdio.h>
#include<malloc.h>

int main()
{
	int T, size, el;
	
	scanf("%d", &T);
	
	while(T) {
	    
	    scanf("%d", &size);
	    int *count = (int*)malloc(sizeof(int)*61);
	    int *index = (int*)malloc(sizeof(int)*61);
	    
	    for(int i = 0; i < size; ++i) {
	        
	        scanf("%d", &el);
	        count[el]++;
	        index[el]++;
	    }
	    
	    for(int i = 0; i < 60; ++i) {
	        
	        for(int j = i + 1; j < 61; j++ ){
	            
	            if(count[i] < count[j]){
	                int temp = count[i];
	                    count[i] = count[j];
	                    count[j] = temp;
	            }
	        }
	    }
	    
	    
        for(int j = 0 ; j < 61 ; ++j){
            
	        if(count[j]!=0){
	            
	            for(int i = 0 ; i < 61 ; ++i){
	                
	                if(count[j] == index[i]){
	                    
	                 for(int k = 0 ; k < count[j] ; ++k)
	                 
	                 printf("%d ",i);
	                 
	                 index[i] = 0;     
	                }
	            }
	        }
	    }	   
	    
	    printf("\n");
	    
	    T--;
	}
	return 0;
}