class Solution {
    int solve(int n,int rem,int mini,vector<int>&profit,vector<int>&group,vector<vector<vector<int>>>&dp)
    {
        if(n < 0)
        {
         if(mini <= 0) return 1;
          return 0;
          }
        
        if(dp[n][rem][mini]!=-1) return dp[n][rem][mini];
       
        int left=solve(n-1,rem,mini,profit,group,dp);
        int right=0;
        if(rem>=group[n])
        {
            right=solve(n-1,rem-group[n],max(0,mini-profit[n]),profit,group,dp);
        }
        return dp[n][rem][mini]=(left+right)%1000000007;
    }
public:
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int m=group.size();
        vector<vector<vector<int>>> dp(
            m,
            vector<vector<int>>(n+1,
            vector<int>(minProfit+1, -1))
        );

        return solve(m-1,n,minProfit,profit,group,dp)%1000000007;

        
    }
};