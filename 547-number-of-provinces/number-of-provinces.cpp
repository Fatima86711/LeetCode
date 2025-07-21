class Solution {
public:
    void dfs(int node, int n ,vector<int>&visited,vector<vector<int>>& adj){
        visited[node]=1;

    for(int i = 0;i<n;i++){
        if(adj[node][i]==1 &&visited[i]==0){

        dfs(i, n, visited,adj);
        }
    }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int V = adj.size();
        
        vector<int>visit(V,0);
        
        int provinces=0;
        for(int i = 0;i<V;i++){
            if(visit[i]==0){
            provinces++;
            
        dfs(i, V, visit,adj);}
        }
        return provinces;
    }
};