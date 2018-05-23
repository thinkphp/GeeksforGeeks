#include <stdio.h>

int main() {
    
    int T,
        s,
        n,
        m,
        i,
        j,
        k,
        a[100],b[100],c[100],
        temp;
        
    scanf("%d",&T);
    
    while(T--) {
      scanf("%d %d",&n,&m);
      s=0;
      for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]); 
      }
      
      for(j=0;j<m;j++)
      {
         scanf("%d",&b[j]); 
      }
      
      for(i=0;i<n;i++) {
          a[i];
          for(k=0;k<m;k++) {    
              
              if(b[k] == a[i]) c[s++] = a[i];
          }          
      }
      
      if(!s) {
          
         printf("Zero");
         
      } else {
          
            
        for(i=0;i<s-1;i++) {
            
            for(j=i+1;j<s;j++) {
                
                if(c[i]>c[j]) {
                   temp = c[i];
                   c[i] = c[j];
                   c[j] = temp;
                }
            }
        }
                
          
        for(i=0;i<s;i++) printf("%d ", c[i]);
           
      }
      
      printf("\n");
    }
          
}