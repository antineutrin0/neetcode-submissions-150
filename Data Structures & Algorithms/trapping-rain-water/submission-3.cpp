class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int sum=0;
        int tempsum=0;
        int right=1;
        int n=height.size();
        while(right<n){
            if(height[right]<height[left])
             {
                tempsum+=height[left]-height[right];
                right++;
             }
             else
             {
                 sum+=tempsum;
                 tempsum=0;
                 left=right;
                 right++;
             }
        }

        tempsum=0;
        right--;
        n=left;
        left=right-1;
        while(n<=left){

           if(height[right]>height[left])
             {
                tempsum+=height[right]-height[left];
                left--;
             }
             else
             {
                 sum+=tempsum;
                 tempsum=0;
                 right=left;
                 left--;;
             }

        }

        return sum;
    }
};
