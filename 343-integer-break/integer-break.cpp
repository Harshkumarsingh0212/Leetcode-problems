class Solution {
    int solve(int ind,int sum,vector<int>&arr,vector<vector<int>>&dp)
    {
        if(sum==0) return 1;
        if(ind>=arr.size()) return 0;
        
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int left=solve(ind+1,sum,arr,dp);
        int right=0;
        if(arr[ind]<=sum)
        {
            right=solve(ind,sum-arr[ind],arr,dp)*arr[ind];
        }
        return dp[ind][sum]=max(left,right);
    }
  
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
      vector<int>arr;
      for(int i=2;i<n;i++)
      {
        arr.push_back(i);
      }
      vector<vector<int>>dp(n,vector<int>(n+1,-1));
      return solve(0,n,arr,dp);
    }
};
