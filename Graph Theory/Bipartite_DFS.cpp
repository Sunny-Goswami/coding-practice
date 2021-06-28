#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;

class  Solution {
    bool bipartiteDFS(int vertex, vector<int> adjList[], int color[]){
        if (color[vertex] = -1) color[vertex] = 1;

        for(auto it: adjList[vertex]){
            if (color[it] == -1){
                color[it] = 1 - color[vertex];
                if (!bipartiteDFS(it, adjList, color))
                    return false;
            }
            else if(color[it] == color[vertex]) 
                return false;
            
        }
        return true;
    }
public:
    bool checkBipartite(vector<int> adjList[], int N){
        int color[N+1];
        memset(color, -1, sizeof(color));

        for(int i=1; i<=N; i++){
            if (color[i] == -1){
                if (!bipartiteDFS(i, adjList, color))
                    return false;
            }
        }
        return true;
    }
};

int main(){
    int num_of_nodes, num_of_edges;
    cin >> num_of_nodes >> num_of_edges;

    vector<int> adjList[num_of_nodes+1];
    for(int i = 1; i <= num_of_edges; i++){
        int node1, node2; 
        cin >> node1 >> node2;
        adjList[node1].push_back(node2);
        adjList[node2].push_back(node1);
    }

    Solution obj;
    if (obj.checkBipartite(adjList, num_of_nodes)) 
        cout << "yes";
    else 
        cout << "no";

}