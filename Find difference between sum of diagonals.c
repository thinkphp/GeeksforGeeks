#include<stdio.h>
#define abs(x)  ( (x<0) ? -(x) : (x) )

int main()
{
    int i,j,//iterator for rows and cols
        T,//test cases
        n,//denoting the size of matrix NxN 
        matrix[101][101],//this data structure holds the matrix
        diff, //this var holds the diff abs
        firstDiag, //sum of elements first diag
        secondDiag;//sum of elements seconds diag    
    
    scanf("%d", &T); 
	while(T--){

         scanf("%d", &n);
         
         for(i = 0; i < n; ++i) {
             
             for(j = 0; j < n; j++) {
                 
                 scanf("%d", &matrix[i][j]);
             }
         }
         
         firstDiag = secondDiag = 0;
         
         for(i = 0; i < n; ++i) {
             
             for(j = 0; j < n; j++) {
                 
                 if(i == j) {
                     
                     firstDiag += matrix[i][j];
                 }
                 
                 if((i + j) == (n - 1)) {
                     
                     secondDiag += matrix[i][j];
                 } 
             }
         }
          
         diff = abs(firstDiag - secondDiag);
         
         printf("%d\n", diff);
	}
	return 0;
}