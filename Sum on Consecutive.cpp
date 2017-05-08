include<bits/stdc++.h>

using namespace std;

typedef long long int LLI;

int main()
 {
	int t;
	
	LLI n;
	
	cin>>t;
	
	while(t--){
	    
	    cin>>n;
	    
	    int m = n & n-1;
	    
	    if(m==0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
	}
	return 0;
}