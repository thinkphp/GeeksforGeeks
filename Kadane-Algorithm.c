#include <stdio.h>
#include <malloc.h>

int kadane(int *vec, int N) {
    
     int maxEndHere, 
         maxSoFar, 
         i; 
     
     maxEndHere = 0; maxSoFar = -1000;
     
     for(i = 0; i < N; ++i) {
         
         maxEndHere +=  vec[i];
         
         if(maxEndHere > maxSoFar) maxSoFar = maxEndHere;
         
         if(maxEndHere < 0) maxEndHere = 0;
         
     }
     
     return maxSoFar; 
     
}

int main(void) {
    
	int *A;
	int T, i, N;

	scanf("%d", &T);
	
	while (T--) {
	    
		scanf("%d", &N);
		
		A = (int*)malloc(sizeof(int)*N);
		
		for (i = 0; i < N; i++)
		
			scanf("%d", &A[i]);
			
		printf("%d\n", kadane(A, N));
	}
	
	free(A);
	
	return 0;


}