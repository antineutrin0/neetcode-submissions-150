class Solution {
    int countWays(int n,vector<int>&dp){
        if(n<3)
        return n;
        if(dp[n]!=-1)
        return dp[n];
        dp[n]=countWays(n-1,dp)+countWays(n-2,dp);
        return dp[n];
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        dp[1]=1;
        if(n>1)
        dp[2]=2;
        countWays(n,dp);
         return dp[n];
    }
};
