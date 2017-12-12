#include<stdio.h>
#define MOD 1000000007
#define LLD long long int
int main()
{
int T;
scanf("%d",&T);
while(T--)
{
    LLD n;
    scanf("%lld",&n);
    LLD fib,
        i,
        a=0,
        b=1,
        c=0;
    
    for(i=1;i<=n;i++)
    {
        
        a=b;
        b=c;
        c=(a+b)%MOD;
        
    }
    
    printf("%lld \n",c);
}
	return 0;
}