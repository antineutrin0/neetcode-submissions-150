class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        int maxlen=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int count=1;
           for(int j=i+1;j<nums.size();j++){
              if(nums[j]==nums[j-1])
              continue;
              else if(nums[j]-1==nums[j-1])
               count++;
               else
                 break;
           }
           maxlen=max(maxlen,count);
        }
        return maxlen;
    }
};
