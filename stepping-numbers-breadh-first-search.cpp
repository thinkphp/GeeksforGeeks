#include <iostream>
#include <queue>

using namespace std;

void breadh_first_search(int,int,int); 
void runSteppingNumbers(int,int);
     
int count;     
     
int main() {
    
    int T, //number of test cases
        N, M;//limits num -> [N, M]
        
    cin>>T;
    
    while(T--) {

          cin>>N>>M;
          
          count = 0;
          
          runSteppingNumbers(N, M);
          
          cout<<count<<endl;
    } 
	
	return 0;
};

void breadth_first_search(int N, int M, int num) {
     
     queue<int> Q;
     
     Q.push( num );
     
     while(!Q.empty()) {
         
          int steppNum = Q.front();
          
          Q.pop();
          
          if(steppNum <= M && steppNum >= N) { 
              
              count++;
          }      
          
          if(steppNum == 0 || steppNum > M) continue;
          
          int lastDigit = steppNum % 10;
          
          int steppNum1 = steppNum * 10 + (lastDigit - 1);
          
          int steppNum2 = steppNum * 10 + (lastDigit + 1);

          if(lastDigit == 0) {
              
             Q.push(steppNum2);
             
          }  else if(lastDigit == 9) {
              
              Q.push(steppNum1);
              
          } else {
              
              Q.push(steppNum1);
              
              Q.push(steppNum2);
          }
          
     }
     
}

void runSteppingNumbers(int N,int M) {
    
     for(int i = 0; i <= 9; i++) {
         
         breadth_first_search(N, M, i);
     }
}