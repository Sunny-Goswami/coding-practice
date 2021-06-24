#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
    bool checkForCycle(int vertex, vector<int> adjList[], int *visited){
        queue<pair<int, int>> q;
        q.push({vertex, -1});
        visited[vertex] = 1;

        while(!q.empty()){
            int curr = q.front().first;
            int prev = q.front().second;
            q.pop();

            for(auto it: adjList[curr]){
                if (!visited[it]){
                    visited[it] = 1;
                    q.push({it, curr});
                }
                else if (it != prev)
                    return true;
            }
        }
        return false;
    }
public:
    bool checkCycle(int num_of_nodes, vector<int> adjList[]){
        int visited[num_of_nodes + 1] = {0};
        for(int i=1; i<=num_of_nodes; i++){
            if (!visited[i])
                if (checkForCycle(i, adjList, visited)){
                    return true;
                }  
        }
        return false;
    }
};


int main(){
    int num_of_nodes, num_of_edges; 
    cin >> num_of_nodes >> num_of_edges;

    vector<int> adjList[num_of_nodes+1];

    for(int i=1; i<=num_of_edges; i++){
        int node1, node2;
        cin >> node1 >> node2;
        adjList[node1].push_back(node2);
        adjList[node2].push_back(node1);
    }

    Solution obj;

    if (obj.checkCycle(num_of_nodes, adjList))
        cout << "Yes, there is a cycle.";
    else 
        cout << "Nope, there is no cycle.";
    return 0;
}