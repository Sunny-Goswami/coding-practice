#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
private: 
    bool checkCycle(int vertex, vector<int> adjList[], int *visited, int *dfsVisited){

        visited[vertex] = 1;
        dfsVisited[vertex] == 1;

        for(auto it: adjList[vertex]){
            if (!visited[it]){
                if (checkCycle(it, adjList, visited, dfsVisited)) return true;
            }
            else if (dfsVisited[it])return true;
        }
        dfsVisited[vertex] = 0;
        return false;
        
    }
public: 
    bool isCycle(int num_of_nodes, vector<int> adjList[]){
        int visited[num_of_nodes + 1];
        memset(visited, 0, sizeof(visited));

        int dfsVisited[num_of_nodes + 1];
        memset(dfsVisited, 0, sizeof(dfsVisited));

        for(int i=1; i<=num_of_nodes; i++){
            if (!visited[i]){
                if (checkCycle(i, adjList, visited, dfsVisited))
                    return true;
            }
        }

    }

};

int main(){
    int num_of_nodes, num_of_edges;
    cin >> num_of_nodes >> num_of_edges; 

    vector<int> adjList[num_of_nodes + 1];
    for(int i=1; i<=num_of_edges; i++){
        int node1, node2;
        cin >> node1 >> node2;

        adjList[node1].push_back(node2);
        adjList[node2].push_back(node1);
    }
    Solution obj;

    (obj.isCycle(num_of_nodes, adjList)) ? cout << "true" : cout << "false";
    
}