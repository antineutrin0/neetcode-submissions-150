class Solution {
    void dfs(unordered_map<int, vector<int>>& adj, vector<bool>&visited, int node){
        for(auto i:adj[node]){
            if(!visited[i]){
                visited[i]=true;
                dfs(adj,visited,i);
            }
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<bool>visited(n,false);
         int count=0;
         unordered_map<int, vector<int>> adj;
        for (int i = 0; i < edges.size(); i++)
            {
                adj[edges[i][0]].push_back(edges[i][1]);
                adj[edges[i][1]].push_back(edges[i][0]);
            
            }

        for(int i=0;i<n;i++){
            if(!visited[i]){
               count++;
               dfs(adj,visited,i);
            }
        }
        
        return count;
    }
};

