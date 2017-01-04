#include <stdio.h>

int main() {
    
    int T, //number of test cases
        i,//an iterator
        N, M,//bounds
        count, //number of stepping numbers 
        flag,//a flag to indicate wheather is or not
        num;//get a num
        
    scanf("%d", &T);
    
    while(T--) {

          scanf("%d %d", &N, &M);   
          
          count = 0;
          
          for(i = N; i <= M; i++) {
              num = i;
              flag = 1;
              
              while((num / 10) > 0) {
                  int digit_one = num % 10;
                  num /= 10;
                  int digit_two = num % 10;
                  
                  if((digit_one - digit_two)*(digit_one - digit_two) != 1) 
                  
                      flag = 0;
              }
              
              if(flag == 1) count++;
          }      
          
          printf("%d\n", count);
    } 
	
	return 0;
}