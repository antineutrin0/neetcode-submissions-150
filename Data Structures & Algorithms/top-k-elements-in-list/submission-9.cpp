class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
        }
        vector<pair<int,int>>res;
        for(auto it:mp){
            res.push_back({it.second,it.first});
        }
        sort(res.rbegin(),res.rend());
      vector<int>final;
      for(int i=0;i<k;i++)
      final.push_back(res[i].second);

      return final;
    }
};
