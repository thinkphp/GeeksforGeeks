#include<stdio.h>
#define MOD 1000000007
int main()
{
	int T,i,
	    num,
	    arr[101];
	
	arr[0] = arr[1] = arr[2] = 1;
	
	for(i = 3; i<= 100;i++) {
	    arr[i] = (arr[i-3] + arr[i-2] ) % MOD;
	}
	
	scanf("%d", &T);
	while(T--){
	     scanf("%d", &num);
	     printf("%d\n", arr[num]);
	}
	return 0;
}