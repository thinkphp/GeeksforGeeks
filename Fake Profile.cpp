#include<iostream>

using namespace std;

int main()
{
	int T,count;
	string name;
	char ch;
	bool voyels[26] = {false};
	voyels['a'-'a'] = true;
	voyels['e'-'a'] = true;
	voyels['i'-'a'] = true;
	voyels['o'-'a'] = true;
	voyels['u'-'a'] = true;
	
    cin>>T;
    
	while(T--){
	    cin>>name;
	    count = 0;
	    bool found[26] = {false};
	    for(int i = 0; name[i]!='\0';i++) {
	            ch = name[i] - 'a';
	            if(!voyels[ch] && !found[ch]) {
	                found[ch] = true;
	                count++;
	            }
	    }
	    if(count&1) cout<<"HE!"<<endl; 
	           else 
	                cout<<"SHE!"<<endl;
	    
	}
	return 0;
}