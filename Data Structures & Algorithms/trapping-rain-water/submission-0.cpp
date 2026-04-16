class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int sum=0;
        for(int i=1;i<height.size();i++){
           if(height[i]>=height[left]){
            for(int j=left+1;j<i;j++){
                sum+=height[left]-height[j];
            }
            left=i;
           }
                
        }
        left=0;
   reverse(height.begin(),height.end());
        for(int i=1;i<height.size();i++){
           if(height[i]>height[left]){
            for(int j=left+1;j<i;j++){
                sum+=height[left]-height[j];
            }
            left=i;
           }
                
        }


        return sum;
    }
};
