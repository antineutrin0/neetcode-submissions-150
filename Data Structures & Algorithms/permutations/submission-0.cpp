class Solution {

    void permu(vector<vector<int>>&res, vector<int>&nums, int j){
        if(j==nums.size())
        {
            res.push_back(nums);
            return;
        }

        for(int i=j;i<nums.size();i++){
             swap(nums[i],nums[j]);
             permu(res,nums,j+1);
             swap(nums[i],nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        
        permu(res,nums,0);
        return res;

    }
};
