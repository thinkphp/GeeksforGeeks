#include <stdio.h>
#define MAXS 1000

int max(int a, int b) {return (a > b) ? a : b;}

int main() {

    int i, j, n, arr[MAXS], dp[MAXS], maxSum, T;    

    scanf("%d", &T);    

    while(T--) {    

    scanf("%d", &n);

    for(i = 0; i < n; ++i) scanf("%d", &arr[i]); 

    for(i = 0; i < n; ++i) dp[i] = arr[i];

    for(i = 1; i < n; ++i) {

        for(j = 0; j < i; ++j) {
 
            if(arr[i] > arr[j] && dp[i] < dp[j] + arr[i]) {

                   dp[i] = dp[j] + arr[i];
            }
   
        }
    }

    
    maxSum = dp[0];

    for(i = 1; i < n; ++i) maxSum = max(dp[i], maxSum);

    printf("%d\n", maxSum);

    }

 return(0);
}