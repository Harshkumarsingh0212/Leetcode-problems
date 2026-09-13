class Solution {
    int solve(int ind,int score,int n,vector<vector<int>>&dp)
    {
        if(score == n) return 0;
        if(score > n || 1LL*ind*(ind-1)/2 > n) return 1e9;   
        if(dp[ind][score]!=-1) return dp[ind][score];
        int left=1e9;
        if(ind > 1) left=solve(1,score,n,dp)+1;
        int right=solve(ind+1,score+ind,n,dp)+1;
        return dp[ind][score]=min(left,right);
       
    }
public:
    int minDays(int n) {
        int lim = (1 + sqrt(1.0 + 8.0*n)) / 2 + 3;         
        vector<vector<int>> dp(lim, vector<int>(n+1,-1));
        return solve(1,0,n,dp);
    }
};