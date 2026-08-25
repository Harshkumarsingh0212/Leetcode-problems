class Solution {
    double solve(int n,int k,int row,int col,vector<vector<vector<double>>>&dp)
    {
        if(row<0 ||row>=n ||col<0 ||col>=n) return 0;
        if(k==0) return 1;
        
        if(dp[row][col][k]!=-1) return dp[row][col][k];
       int drow[8] = {-2,-2,-1,-1,1,1,2,2};
       int dcol[8] = {-1,1,-2,2,-2,2,-1,1};
      
       double right=0;
        for(int i=0;i<8;i++)
        {
           int nrow=drow[i]+row;
           int ncol=dcol[i]+col;
           
           
            right+=solve(n,k-1,nrow,ncol,dp);
          
        }
        return dp[row][col][k]=(right)/8;
    }
public:
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>>dp(n+1,vector<vector<double>>(n+1,vector<double>(k+1,-1)));
        return solve(n,k,row,column,dp);
    }
};