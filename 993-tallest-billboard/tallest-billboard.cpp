class Solution {
    int solve(int ind,int diff,vector<int>&arr,vector<vector<int>>&dp)
    {
        
        if(ind<0) 
        {
            if(diff==0) return 0;
            else return -1e9;
        }
        if(dp[ind][diff+5000]!=-1) return dp[ind][diff+5000];
        int skip=solve(ind-1,diff,arr,dp);
        int left=solve(ind-1,diff+arr[ind],arr,dp);
        int right=0;
        right=solve(ind-1,diff-arr[ind],arr,dp)+arr[ind];
        
        return dp[ind][diff+5000]=max(skip,max(left,right));

    }
public:
    int tallestBillboard(vector<int>& rods) {
        int n=rods.size();
        vector<vector<int>>dp(n,vector<int>(10000,-1));
        int ans=solve(n-1,0,rods,dp);
        if(ans>0) return ans;
        else return 0;
    }
};