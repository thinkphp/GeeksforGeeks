#include <iostream>
#include<algorithm>

using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	while(T--)
	{
	    int n,i,j,q=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int l=pow(2,n);
	    int b[l];
	    for(i=0;i<l;i++)
	    {
	        int s=0,c=0;
	        j=i;
	        while(j)
	        {
	            if(j&1) s+=a[c];
	            c++;
	            j>>=1;
	        }
	        b[i]=s;
	    }
	    sort(b,b+l);
	    for(i=0;i<l;i++)
	      cout<<b[i]<<" ";
	      cout<<"\n";
	}
	return 0;
}