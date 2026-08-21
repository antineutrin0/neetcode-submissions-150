class Solution {
  void getSubsets(vector<vector<int>>&res,vector<int>cur, vector<int>&nums, int i){
    if(i==nums.size())
     {
        res.push_back(cur);
        return;
     }

     getSubsets(res,cur,nums,i+1);
     cur.push_back(nums[i]);
     getSubsets(res,cur,nums,i+1);
     return;
  }

public:
    vector<vector<int>> subsets(vector<int>& nums) {

      vector<vector<int>>res;
      vector<int>cur;
      getSubsets(res,cur,nums,0);
      return res;
        
    }
};
