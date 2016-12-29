#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while (t--)
	{
	    int n,k;
	    
	    cin>>n;
	    int a[n];
	    
	    for(int i = 0; i < n; ++i) cin>>a[i];
	     
	    cin>>k;
	    
	    for(int i=0;i<n;i++) {
	        
	        int tm;
	        
	        for(int j=0;j<n-i-1;j++)
	            
	          if(a[j]>a[j+1]) {
	              
	                 tm=a[j]^a[j+1];
	                 a[j] = tm^a[j];
	                 a[j+1] = tm^a[j+1];
	           }
	    }

	    cout<<a[k-1]<<endl; 
	}
	return 0;
}