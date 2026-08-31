class Solution {
    int solve(int i,int j,vector<vector<int>>&dp)
    {
        if(j==0 ||j==i) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int left=solve(i-1,j-1,dp);
        int right=solve(i-1,j,dp);
        return dp[i][j]=left+right;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>dp(numRows);
        for(int i=0;i<numRows;i++)
        {
            dp[i].resize(i+1,-1);
        }
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                dp[i][j]=solve(i,j,dp);
            }
        }
        return dp;
    }
};