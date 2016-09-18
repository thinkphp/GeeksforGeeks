#include<stdio.h>
int main()
{
	int T;	
	scanf("%d", &T);
	while(T--) {
	    int i,j,flag,
	        n;
	    scanf("%d",&n);
	    int a[n];
	    for(i = 0; i < n; i++) scanf("%d", &a[i]);
	         
	    for(i = 0; i < n - 1; i++) {
	        flag = 0; 
	        for(j = i + 1; j < n; j++) {
	            if(a[i]<a[j] || a[i] == a[j]) {flag = 1;break;}
	        }
	        if(!flag) printf("%d ",a[i]);
	    }
	    printf("%d\n",a[n-1]);
	}
	return 0;
}