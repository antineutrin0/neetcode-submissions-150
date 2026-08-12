class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         set<vector<int>>st;
        
        for(int i=0;i<nums.size();i++)
        {
         int j=i+1;
         int k=nums.size()-1;
         while(j<k){
            if(nums[i]+nums[j]+nums[k]>0)
             k--;
            else if(nums[i]+nums[j]+nums[k]==0)
             {
               st.insert({nums[i],nums[j],nums[k]});
               k--;
             }
             else
             j++;

         }
        }
        vector<vector<int>>res;
        for(auto it:st){
            res.push_back(it);
        }
        return res;
    }
};
