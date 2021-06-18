#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> arr[], int node1, int node2){
    arr[node1].push_back(node2);
    arr[node2].push_back(node1);
}

void printGraph(vector<int> arr[], int num_of_nodes) {
    for (int i=0; i<num_of_nodes; i++){
        cout << "Adjacency List of vertex " << i <<": ";
        for (auto x: arr[i])
            cout << "-> " << x ;
        cout << "\n"; 
    }
}

int main(){
    int num_of_nodes; cin >> num_of_nodes;
    int num_of_edges; cin >> num_of_edges;
    vector <int> adjList[num_of_nodes + 1];
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 4);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 4);

    printGraph(adjList, num_of_nodes);
    return 0;
}
