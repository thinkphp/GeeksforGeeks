#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    
	int t;
	cin>>t;
	
	int i,
	    j;
	
	while(t--)
	{
	    int n;

	    cin>>n;
	    
	    int num[n];
	    
	    for(i=0;i<n;i++) cin>>num[i];
	    
	    if(n == 1) {
	       cout<<num[0]<<endl;
	       continue;
	    }
	   
	    int lcm;
	    
	    lcm = num[0] * num[1] / gcd(num[0], num[1]);
	    
	    for(i = 2; i < n; i++) 
	    
	        lcm = lcm * num[i] / gcd(num[i],lcm); 
	        
	    cout<<lcm;      
	        
	    cout<<endl;      
	    
	}
	
	return 0;
}