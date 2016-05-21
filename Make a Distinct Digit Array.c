#include<stdio.h>
int main()
{
	int T, i, N, num, r;
	
	scanf("%d",&T);
	while(T--) {
	
	   scanf("%d", &N);
	   
	   int vec[N];
	   
	   int arr[10] = {0};
	   
  	   for(i = 0; i < N; ++i) {
  	       
	       scanf("%d", &vec[i]);
	       num = vec[i]; 
	       
	       while( num != 0 ) {
	           
	           r = num%10;
	           arr[r] = 1;
	           num /= 10;
	       }
	   }

       for(i = 0; i < 10; ++i) {
	       
	       if(arr[i] == 1) {
	           
	          printf("%d ", i);
	       }
	   }      
	   
	   printf("\n");
	}
	
	return 0;
}