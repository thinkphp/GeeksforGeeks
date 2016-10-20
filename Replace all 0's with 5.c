#include <stdio.h>
#include <math.h>
#define SIZE 10000

int main() {

    int T,
        n,
        i,
        arr[SIZE], 
        index = 0, 
        temp,
        p, 
        s;
   
    scanf("%d", &T);

    while(T--) {

          scanf("%d",&n);

          index = 0;

          while( n ) {

              temp = n % 10;

              arr[index++] = temp;

              n /= 10;  
          } 

          p = index - 1;

          for(i = 0; i < index; i++) 

              if(arr[i] == 0) arr[ i ] = 5;  

          s = 0; 

          for(i = index-1; i >= 0; i--) {

              s = s+ pow(10,p)*arr[i];
              p--; 
          }

          printf("%d\n", s);
    } 

return(0);
}