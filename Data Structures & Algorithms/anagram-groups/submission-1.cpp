class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,int>mp;
        for(int i=0;i<strs.size();i++){
            string str=strs[i];
            sort(str.begin(),str.end());
            int val=mp[str];
            if(val==0)
            {
                int siz=res.size();
                res.push_back({strs[i]});
                mp[str]=siz+1;
            }
            else
            res[mp[str]-1].push_back(strs[i]);
        }
      return res;

    }
};