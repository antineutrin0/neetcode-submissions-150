class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<int> vis(1001, 0);

        for (int i = 0; i < strs.size(); i++) {
            if (vis[i]) continue;

            vector<string> group;
            string s1 = strs[i];
            sort(s1.begin(), s1.end());

            group.push_back(strs[i]);
            vis[i] = 1;

            for (int j = i + 1; j < strs.size(); j++) {
                if (vis[j]) continue;

                string s2 = strs[j];
                sort(s2.begin(), s2.end());

                if (s1 == s2) {
                    group.push_back(strs[j]);
                    vis[j] = 1;
                }
            }

            res.push_back(group);
        }

        return res;
    }
};