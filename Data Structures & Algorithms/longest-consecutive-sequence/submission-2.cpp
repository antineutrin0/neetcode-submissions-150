class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        int maxlen=0, ans=0;
        unordered_set<int>st;
        for(auto it:nums){
            st.insert(it);
        }

        for(auto it:nums){
            if(st.find(it-1)==0){
                int i=0;
                while(st.contains(it+i)){
                    maxlen++;
                    i++;
                }
                ans=max(ans,maxlen);
                maxlen=0;
            }
        }

        return ans;
    }
};
