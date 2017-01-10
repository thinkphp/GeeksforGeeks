#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b) (a<b?a:b)

int main()
{
	int T,N,i,j,
	        center_point,
	        cols_rows,
	        dx,dy;
	        
	scanf("%d", &T);
	
	while(T--) {

        //iterate through all the cases
	    scanf("%d", &N);    //input N
	    
	    //  calculate the number of rows and column
    	cols_rows = 2 * N - 1;
    	center_point = N - 1;
    	
    	for(i=0;i<cols_rows;i++)
    	{
    	    for(j=0;j<cols_rows;j++)
    	    {
    	       dx = abs(center_point - i);
    	       dy = abs(center_point - j);
    	       
    	       printf("%d", MIN(dx, dy) + abs(dx - dy) + 1);
    	        
    	    }
    	    printf(" ");
    	   
    	}
    	
    	printf("\n");
	}
	return 0;
}