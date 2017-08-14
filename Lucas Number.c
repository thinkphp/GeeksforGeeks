#include<stdio.h>
#define MOD 1000000007
int main()
{
	int T,i,
	    num,
	    arr[101];
	
	arr[0] = 2; 
	arr[1] = 1;
	
	for(i = 2; i<= 100;i++) {
	    arr[i] = (arr[i-2] + arr[i-1] ) % MOD;
	}
	
	scanf("%d", &T);
	while(T--){
	     scanf("%d", &num);
	     printf("%d\n", arr[num]);
	}
	return 0;
}