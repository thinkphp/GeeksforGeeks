#include<bits/stdc++.h>
#define N 100
#define WHITE 0
#define GREY 1
#define BLACK 2

using namespace std;

class Graph {

      int V;
      list<int> *adj;
        
      public:
      Graph(int V);
      void addEdge(int v, int w);
      bool isCyclic();         
};

Graph::Graph(int V) {

      this->V = V;

      adj = new list<int>[V]; 
};

void Graph::addEdge(int v, int w){

       adj[v].push_back(w);
};

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


int main() {

     int nodes, edges, T;

     cin>>T;

     while(T--) {
 
     cin>>nodes>>edges;

     Graph *g = new Graph(nodes); 

     for(int i = 0; i < edges; ++i) {

             int u,v;

             cin>>u>>v;

             g->addEdge(u,v);
     } 

     cout<<g->isCyclic()<<endl; 

     }

return(0);
}