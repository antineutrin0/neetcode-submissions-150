
  void getSubsets(vector<vector<int>>&res,vector<int>cur, vector<int>&nums, int i){
    if(i==nums.size())
     {
        res.push_back(cur);
        return;
     }
     cur.push_back(nums[i]);
     getSubsets(res,cur,nums,i+1);
     cur.pop_back();
     while (i + 1< nums.size()&&nums[i]==nums[i+1]) {
            i++;
        }
     getSubsets(res,cur,nums,i+1);
     return;
  }

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
              vector<vector<int>>res;
      vector<int>cur;
      sort(nums.begin(),nums.end());
      getSubsets(res,cur,nums,0);
      return res;
    }
};
