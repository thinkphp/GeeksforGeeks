#include<stdio.h>
int main()
{
	int T,i,vec[1000],lo,hi,
	    n,a,b;
	scanf("%d", &T);
	while(T--){
	    
	    scanf("%d",&n);
	    for(i = 0; i < n; i++) {
	        scanf("%d",&vec[i]);    
	    }
	    scanf("%d %d", &a, &b);
	    
	    lo = a - 1;//lo will point to the first element
	    hi = b - 1;//hi will point to the last element
	    
	    while(lo < hi) {
	        int temp = vec[lo];
	        vec[lo] = vec[hi];
	        vec[hi] = temp;
	        lo++;//lo increment
	        hi--;//hi decrement
	    }
	    
	    for(i = 0; i < n; i++) {
	        printf("%d ",vec[i]);    
	    }
	    
	    printf("\n");
	}
	return 0;
}