#include <stdio.h>

int main() {
	//code
	
	int T;
	scanf("%d",&T);
	while(T)
	{
        long int n,k, bin=0,num;
        scanf("%ld %ld",&n,&k);
        int count=0;
        num=n;
        while(n)
        {
            count++;
            n=n/2;
        }
        //printf("%d\n",count);
        num= num & (~(1<<(count-k)));
        printf("%ld\n",num);
    
	    T--;
	    
	}
	return 0;
}