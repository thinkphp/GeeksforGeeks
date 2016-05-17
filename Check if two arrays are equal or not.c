#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    
       int T, i, n, *a, *b, flag;
       cin>>T;
       
       while(T--) {
           cin>>n;
           a = new int[n];
           b = new int[n];
           for(i = 0; i < n; i++) {
               cin>>a[i];
           }
           for(i = 0; i < n; i++) {
               cin>>b[i];
           }
           sort(a, a + n);
           sort(b, b + n);
           flag = 1;
           for(i = 0; i < n; i++) {
               if(a[i] == b[i]) {
                  continue; 
               } else {flag = 0; break; }
           }
           cout<<flag<<endl;
       }
       return(0);
}