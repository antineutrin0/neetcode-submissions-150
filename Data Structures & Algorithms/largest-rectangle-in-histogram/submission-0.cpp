class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> stk;
        int maxarea = 0;

        for(int i = 0; i < heights.size(); i++) {
            int idx = i;

            while(!stk.empty() && stk.top().second > heights[i]) {
                auto val = stk.top();
                stk.pop();

                maxarea = max(maxarea, (i - val.first) * val.second);

                idx = val.first;
            }

            stk.push({idx, heights[i]});
        }

        int n = heights.size();

        while(!stk.empty()) {
            auto val = stk.top();
            stk.pop();

            maxarea = max(maxarea, (n - val.first) * val.second);
        }

        return maxarea;
    }
};