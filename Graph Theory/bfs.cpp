#include<iostream>
#include<vector>
#include<queue>

using namespace  std;

vector<int> visited;

void addEdge(vector<int> adjList[], int node1, int node2){
    adjList[node1].push_back(node2);
    adjList[node2].push_back(node1);
}

void bfs(vector<int> adjList[], int vertex){
    queue<int> q;
    q.push(vertex);
    visited[vertex] = 1;
    
    while(!q.empty()){
        int front = q.front();
        q.pop();
        cout << front << " ->";
        
        for(auto it: adjList[front]){
            if (!visited[it]){
                q.push(it);
                visited[it] = 1;
            }
        }
    }    
}

int main(){
    int num_of_nodes, num_of_edges;
    cin >> num_of_nodes >> num_of_edges;
    
    for(int i=1; i<=num_of_nodes; i++)
        visited.push_back(0);
    
    vector<int> adjList[num_of_nodes + 1];
    int node1, node2;

    for(int i=1; i<=num_of_edges; i++){
        cin >> node1 >> node2;
        addEdge(adjList, node1, node2);
    }
    for(int i=1; i<=num_of_nodes; i++){
        if(!visited[i])
            bfs(adjList, i);
    }
}