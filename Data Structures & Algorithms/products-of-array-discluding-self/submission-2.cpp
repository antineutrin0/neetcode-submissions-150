class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int siz=nums.size();
    vector<int>vec(siz,1);
    int postcount=1;
    int precount=1;
    for(int i=1;i<siz;i++){
      precount=precount*nums[i-1];
      vec[i]=precount;
    }


    for(int i=siz-2;i>=0;i--){
      postcount=postcount*nums[i+1];
      vec[i]=vec[i]*postcount;
    }


    return vec;
    
    }
};