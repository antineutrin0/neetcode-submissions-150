class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxx=0;int j=heights.size()-1;
        for(int i=0;i<j;)
        {
            maxx=max((j-i)*min(heights[i],heights[j]),maxx);
            if(heights[i]<heights[j])
              i++;
            else
            j--;
        }
        return maxx;
    }
   
};
