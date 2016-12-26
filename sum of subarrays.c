#include <stdio.h>
int main()
{
    long int t,n;
    long int arr[100000];
    long int i;
    long int s;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
        s=0;
        for(i = 0; i < n; i++) {
            s += arr[i]*(n - i)*(i+1);
        }
        s = s % 1000000007;
        printf("%ld\n",s);
    }
    return 0;
}

