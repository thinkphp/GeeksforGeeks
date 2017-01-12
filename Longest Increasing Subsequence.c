

#include <stdio.h>
#define MAXS 10000

int main() {
   int i, j, N, max,T,
          arr[MAXS], 
           dp[MAXS];

   scanf("%d", &T);
   
   while(T--) {
       
   
   scanf("%d", &N);

   for(i = 0; i < N; ++i) scanf("%d", &arr[i]);

   for(i = 0; i < N; ++i) dp[i] = 1;

   for(i = 1; i < N; ++i) {

       for(j = 0; j < i; ++j) {

           if((arr[i]) > (arr[j]) && dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
       }
   }

   max = -1;

   for(i = 0; i < N; ++i) if(max < dp[i]) max = dp[i]; 

   printf("%d\n", max);
  }

   return(0);
}