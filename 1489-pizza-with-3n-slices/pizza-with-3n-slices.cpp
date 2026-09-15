class Solution {
    int solve(int ind,int count,int end,vector<int>&arr,vector<vector<int>>&dp)
    {
        if(count==0) return 0;
        if(ind>end) return -1e9;
        if(dp[ind][count]!=-1) return dp[ind][count];
        int left=solve(ind+1,count,end,arr,dp);
        int right=solve(ind+2,count-1,end,arr,dp)+arr[ind];
        return dp[ind][count]=max(left,right);
    }
public:
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size()/3;
        int n=slices.size();
        vector<vector<int>>dp1(n,vector<int>(k+1,-1));
        vector<vector<int>>dp2(n,vector<int>(k+1,-1));
        int ans1=solve(0,k,n-2,slices,dp1);
        int ans2=solve(1,k,n-1,slices,dp2);
        return max(ans1,ans2);
        
    }
};