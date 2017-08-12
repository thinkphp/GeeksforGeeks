#include <stdio.h>
int main() {
    int T,i,j,n,arr[500];
    
    scanf("%d", &T);
    while(T--){
        
      scanf("%d",&n);
      for(i = 0; i < n; i++) scanf("%d",&arr[i]);
        
      int count = 0; 
      
      for(i = 0; i < n - 1; i++)
          
           for(j = i + 1; j < n; j++)
               
               if(arr[i] > arr[j])
                   
                   count++;
                   
       printf("%d\n",count);                   
               
    }
       

         
return(0);
}