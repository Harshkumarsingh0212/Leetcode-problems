class Solution {
    int solve(int ind,vector<int>&arr,vector<int>&dp)
    {
        if(ind>=arr.size())return 0;
        if(dp[ind]!=-1) return dp[ind];
        int profit=INT_MAX;
        for(int i=1;i<=3&&ind+i<=arr.size();i++)
        {
            profit=min(profit,solve(ind+i,arr,dp)+arr[ind+i-1]+i*i);
        }
        return dp[ind]=profit;
    }
public:
    int climbStairs(int n, vector<int>& costs) {
        int m=costs.size();
        vector<int>dp(m+1,-1);
        return solve(0,costs,dp);
    }
};