#include<stdio.h>
int main()
{
	int T, i, n, arr[10000], total;
	scanf("%d", &T);
	while(T--) {
	    scanf("%d",&n);
	    for(i = 0; i < n - 1; i++) {
	        scanf("%d", &arr[i]);
	    }
	    total = n*(n+1)/2;
	    for(i = 0; i < n - 1; i++) total-=arr[i];
	    printf("%d", total);
	    printf("\n");
	}
	return 0;
}