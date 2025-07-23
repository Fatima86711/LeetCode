class Solution {
public:
bool dfs (int &source, int destination, vector<vector<int>>&adj, vector<bool>&visited){
    if(destination == source ){
        return true;
    }
    visited[source]= true;
    for(auto &it : adj[source]){
        if(!visited[it]){
          if(  dfs(it, destination, adj, visited)){
            return true;
          }
        }
    }
return false;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        // adj.resize(n);
for(auto &edge: edges){
   int u= edge[0];
    int v= edge[1];
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<bool>visited(n,false);
// visited.assign(n,false);
return dfs (source, destination, adj, visited);
    }
};