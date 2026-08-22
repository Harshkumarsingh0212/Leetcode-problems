class Solution {
    int solve(int ind,int prev,vector<int>&arr,
              vector<vector<int>>&dp,unordered_map<int,int>&mp)
    {
        if(ind>=arr.size()) return 0;
        if(dp[ind][prev]!=-1) return dp[ind][prev];
        
        int right=0;
        int sum=arr[ind]+arr[prev];

        if(mp.find(sum)!=mp.end())
        {
            int next=mp[sum];
            right=solve(next,ind,arr,dp,mp)+1;
        }

        return dp[ind][prev]=right;
    }

public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=i;
        }

        vector<vector<int>>dp(n,vector<int>(n,-1));

        int ans=0;

        for(int i=0;i<n;i++)
{
         for(int j=i+1;j<n;j++)
        {
        ans=max(ans,solve(j,i,arr,dp,mp));
          }
}
        if(ans>=1)
       return ans+2;
        return 0;
    }
};