
  void getSubsets(set<vector<int>>&res,vector<int>cur, vector<int>&nums, int i){
    if(i==nums.size())
     {
        res.insert(cur);
        return;
     }
     cur.push_back(nums[i]);
     getSubsets(res,cur,nums,i+1);
     cur.pop_back();
     getSubsets(res,cur,nums,i+1);
     return;
  }

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            set<vector<int>>res;
            vector<vector<int>>ans;
      vector<int>cur;
      sort(nums.begin(),nums.end());
      getSubsets(res,cur,nums,0);
      for(auto it:res){
        ans.push_back(it);
      }
      return ans;
    }
};
