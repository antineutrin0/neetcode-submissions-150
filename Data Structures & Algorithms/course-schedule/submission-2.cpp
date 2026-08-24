class Solution {
    bool dfs(unordered_map<int,vector<int>>&adj,vector<int>& state, int node) {
           state[node]=1;
        for (auto neighbor :adj[node]) {
              if(state[neighbor]==1)
              return false;
             if (state[neighbor] == 0) {
                if (!dfs(adj, state, neighbor))
                    return false;
            }
        }
        state[node]=2;

        return true;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        unordered_map<int,vector<int>>adj;

       for(int i=0;i<prerequisites.size();i++)
             adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        vector<int> state(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            if (state[i] == 0) {
                if (!dfs(adj, state, i))
                    return false;
            }
        }

        return true;
    }
};