class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

    vector<int>vec;
    for(int i=0;i<nums.size();i++)
       {
        long int mul=1;
        for(int j=0;j<nums.size();j++)
           {
            if(i==j)
            continue;
            else
            mul=mul*nums[j];
           }
         vec.push_back(mul);
       }
      return vec;

    }
};
