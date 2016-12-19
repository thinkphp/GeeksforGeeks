#include <iostream>
#include <vector>
#define INF 100000

using namespace std;

void run(vector<int> vec, int N) {

     int i, j, min; 

     vector<int> jumps(N);

     jumps[0] = 0;

     for(i = 1; i < N; ++i) {

         min = INF;

         for(j = 0; j < i; j++) {

             if(vec[j] >= i - j) {

                if(min > jumps[j] + 1) min = jumps[j] + 1; 
             } 
         }

         jumps[ i ] = min;
     }  

     if(jumps[N-1] == INF) cout<<-1<<endl;
         else  
                           cout<<jumps[N-1]<<endl;
}

int main() {

    int T, 
        N;

     cin>>T;

    //iterate through all the cases
    while(T--) {

          //scan the number of items
          cin>>N;

          vector<int> vec(N);

          for(int i = 0; i < N; i++) cin>>vec[i]; 

          run(vec,N);
    };

 return(0);
}