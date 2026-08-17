class Solution {
public:
    int binary(vector<int>&nums, int target, int low, int high){
      int mid;
      while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[mid]<target)
             low=mid+1;
             else
             high=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<high){
            mid=low+(high-low)/2;
            if(nums[mid]>nums[high])
             low=mid+1;
             else
             high=mid;
        }

        int idx1=binary(nums, target, 0, low-1);
        if(idx1!=-1)
        return idx1;
        int idx2=binary(nums,target,low, nums.size()-1);
       if(idx2!=-1)
       return idx2;
        return -1;
    }
};
