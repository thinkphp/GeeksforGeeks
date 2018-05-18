#include<bits/stdc++.h>
using namespace std;


void display(string s, int i){
    
    if(i==s.size()){
        
        cout<<s<<" ";
        return;
    }
    if(s[i] == '?'){
        
        s[i] = '0';
        
        display(s, i+1);

        s[i]='1';
        
        display(s, i+1);
        
    } else {
        
        display(s, i+1);
    }

}
