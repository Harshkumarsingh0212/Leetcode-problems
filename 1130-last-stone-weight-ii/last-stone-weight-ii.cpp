class Solution {
    int solve(int ind,int sum,vector<int>&arr,vector<vector<int>>&dp,int total)
    {
        if(ind<0) return 0;
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int left=solve(ind-1,sum,arr,dp,total);
        int right=0;
        if(sum+arr[ind]<=total/2)
        {
            right=solve(ind-1,sum+arr[ind],arr,dp,total)+arr[ind];
        }
        return dp[ind][sum]=max(left,right);
    }
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n=stones.size();
        int total=0;
        for(auto x:stones) total+=x;
        vector<vector<int>>dp(n,vector<int>(total,-1));
        int ans=solve(n-1,0,stones,dp,total);
        return total-2*ans;
    }
};