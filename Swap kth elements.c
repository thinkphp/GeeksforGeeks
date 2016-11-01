#include <stdio.h>

int main() {
	int t,n,a[500],k;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&n,&k);
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int temp=a[k-1];
	    a[k-1]=a[n-k];
	    a[n-k]=temp;
	    for(int i=0;i<n;i++)
	        printf("%d ",a[i]);
	    printf("\n");
	}
	return 0;
}