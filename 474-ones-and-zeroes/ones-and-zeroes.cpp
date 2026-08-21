class Solution {
    int solve(int ind,int m,int n,vector<int>&one,vector<int>&zero,vector<vector<vector<int>>>&dp)
    {
           if(ind<0) return 0;
           if(dp[ind][m][n]!=-1) return dp[ind][m][n];
           int left=solve(ind-1,m,n,one,zero,dp);
           int right=0;
           if(one[ind]<=n &&zero[ind]<=m)
           {
            right=solve(ind-1,m-zero[ind],n-one[ind],one,zero,dp)+1;
           }
           return dp[ind][m][n]=max(left,right);

    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<int>one;
        vector<int>zero;
        int x=strs.size();
         vector<vector<vector<int>>>dp(x+1,vector<vector<int>>(m+1,vector<int>(n+1,-1))); 
        for(int i=0;i<strs.size();i++)
        {
            int o=0;
            int k=0;
            int l=0;
            while(l<strs[i].size())
            {
                if(strs[i][l]=='1') o++;
                else k++;
                l++;
                
            }
            one.push_back(o);
            zero.push_back(k);
        }
          return solve(x-1,m,n,one,zero,dp);
    }
};