#include<stdio.h>
#define MAXSIZE 100001
#define MOD 1000000007

int a[MAXSIZE] = {0,1},
    sum[MAXSIZE] = {0,1};

void generate_sum_fibonacci(){
     int i;
     for(i = 2; i < MAXSIZE; i++) {
         a[i] = (a[i-1] + a[i-2]) % MOD;
         sum[i] = (a[i] + sum[i-1] ) % MOD; 
     }
};

int main()
{
    int T,N;
    
    scanf("%d", &T);

    generate_sum_fibonacci();    
    
    while(T--) {
          scanf("%d",&N);
          printf("%d\n",sum[N]);
    }
    
	return 0;
}