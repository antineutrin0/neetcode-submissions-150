class Solution {
    bool dfs(int node, int parent, unordered_set<int>& visit, vector<vector<int>>& adj) {
        if (visit.count(node)) {
            return false;
        }

        visit.insert(node);
        for (int i : adj[node]) {
            if (i == parent) {
                continue;
            }
            if (!dfs(i, node, visit, adj)) {
                return false;
            }
        }
        return true;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        unordered_set<int> visit;
        if (!dfs(0, -1, visit, adj)) {
            return false;
        }
         if(visit.size()==n)
         return true;
         else
         return false;

    }
};