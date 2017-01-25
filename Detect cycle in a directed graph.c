#include<bits/stdc++.h>
#define N 100
#define WHITE 0
#define GREY 1
#define BLACK 2

using namespace std;

bool hasCycle(std::list<int> adj[], int colours[], int u) {

     colours[u] = GREY;

     for( const auto&v:adj[u] ) {

          switch( colours[v] ) {
            
                  case GREY: 

                       return true;         
                  case WHITE: 

                       if(hasCycle(adj, colours, v))   
                       return true;         
          }
     }

     colours[ u ] = BLACK;

     return false;     
}

bool Graph::isCyclic() {

    static int colours[N];

    for (int i = 0; i < V; i++) {

        colours[i] = WHITE;
    }

    for (int i = 0; i < V; i++) {

        if (colours[i] == 0) {

            if (hasCycle(adj, colours, i)) {

                return true;
            }
        }
    }

    return false;    
}

