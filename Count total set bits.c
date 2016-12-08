#include <stdio.h>
int abc(int n)
{
	int count=0;
	while(n)
	{
		count+=n&1;
		n>>=1;
	}
	return count ;
}
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		int count=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			count=count+abc(i);
		}
		printf("%d\n",count);
	}
	return 0;
}