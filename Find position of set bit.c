#include<stdio.h>
int main()
{
    int num,
        count, 
        T;
        
    scanf("%d", &T);
    
    while(T--) {
        
          scanf("%d",&num);
          count = 0;
          
          while(!(num&1)) num>>=1,count++;
          
          num>>=1;
          count++;
          
          (num)?printf("%d\n",-1):printf("%d\n",count);
          
    }
	return 0;
}