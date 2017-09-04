#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	
	char str[100];
	int T;
	
	cin>>T;
	
	while(T--){
	    
	    cin>>str;
	    
	    int flag = 0,
	    
	        len = strlen(str);
	    
	    for(int i = 0 ; i < len - 1; i++) {
	        
	        if( abs(str[i] - str[i+1]) == 1 || abs(str[i] - str[i+1]) == 25 ) continue;
	        
	                  else flag = 1;
	    }
	    
	    if(!flag) cout<<"YES"<<endl;
	    
	           else 
	           
	              cout<<"NO"<<endl;
	}
	
	return 0;
}