class Solution {
   
   void backtrack(vector<vector<int>>&res,vector<int>&nums,vector<int>&cur,int i, int target){
   if(target==0)
   {
    res.push_back(cur);
    return;
   }
   if(target<0||i==nums.size())
   return;

   cur.push_back(nums[i]);
   backtrack(res,nums,cur,i,target-nums[i]);
   cur.pop_back();
   backtrack(res,nums,cur,i+1,target);
   }

public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<vector<int>>res;
        vector<int>cur;

        backtrack(res,nums,cur,0,target);
        return res;

        
    }
};
