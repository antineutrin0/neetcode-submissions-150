class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>>vec;
         map<vector<int>,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int k=nums.size()-1;
            for(int j=i+1;j<nums.size();)
            {   if(k<=j)
                 break;
               else if(nums[i]+nums[j]+nums[k]>0)
                  k--;
                else if(nums[i]+nums[j]+nums[k]==0)
                {
                    mp[{nums[i],nums[j],nums[k]}]=1;
                j++;
                }
                else
                j++;
            }
        }
        for(auto it:mp)
           vec.push_back(it.first);
        return vec;

    }
};
