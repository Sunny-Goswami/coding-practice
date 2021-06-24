#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_of_nodes, num_of_edges;
    cin >> num_of_nodes >> num_of_edges;
    
    int adjMatrix[num_of_nodes + 1][num_of_nodes + 1];
    memset(adjMatrix, 0, sizeof(adjMatrix));

    for(int i=0; i<num_of_edges; i++){
        int u, v; cin >> u >> v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }
    return 0;
}    