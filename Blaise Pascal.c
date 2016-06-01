/*
 * Blaise Pascal's Triangle 
 */
#include <stdio.h>
#define MAXN 100

int main() {

    int n,

        i,

        j,

        k, 

        T;

    unsigned long long pascal[ MAXN ][MAXN ];

    scanf("%d",&T);  

    while(T--) { 

    scanf("%d",&n);  

    pascal[0][0] = 1;
 
    for(i = 1; i <= n; ++i) {

        for(j = 0; j <= i; ++j) {

            if( 0 == j || i == j) pascal[i][j] = 1;

                else

                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
        }
    }

    for(j = 0; j < n; j++) {

        printf("%lld ", pascal[n-1][j]);
    }
    printf("\n");

  }

 return(0);
}