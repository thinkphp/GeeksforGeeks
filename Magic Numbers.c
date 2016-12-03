#include <iostream>

using namespace std;

int magicNumber(int input){
  
    int prod = 1, ans = 0;
    
    while(input) {
        
          prod *= 5;
          
          if(input & 1) {
              ans = ans + prod;
          }
          
          input >>= 1;
    }
    
    return ans;
};

int main() {

 int tc, input;

 cin>>tc;

 for(int i=0; i<tc; i++)
 {
    cin >> input;
    cout << magicNumber(input)<<endl;

 }

	return 0;
}