class Solution {
    void backtrack(vector<vector<int>>& res,
                   vector<int>& nums,
                   vector<int>& cur,
                   int start,
                   int target) {

        if (target == 0) {
            res.push_back(cur);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
           if (i > start && nums[i] == nums[i - 1])
                continue;

            if (nums[i] > target)
                break;

            cur.push_back(nums[i]);

           backtrack(res, nums, cur, i + 1, target - nums[i]);

            cur.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res;
        vector<int> cur;

        backtrack(res, candidates, cur, 0, target);

        return res;
    }
};