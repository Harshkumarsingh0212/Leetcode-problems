class Solution {
    int solve(int ind,int sum,vector<int>&arr,vector<vector<int>>&dp)
    {
        if(ind<0) return -10000;
        if(sum==0) return 0;
        if(ind==0)
        {
           if(arr[0] == sum) return 1;
            else return -100000;
        }
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int left=solve(ind-1,sum,arr,dp);
        int right=-10000;
        if(arr[ind]<=sum)
        {
            right=1+solve(ind-1,sum-arr[ind],arr,dp);
        }
        return dp[ind][sum]=max(left,right);
    }
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        int ans=solve(n-1,target,nums,dp);
        if(ans<0) return -1;
        else return ans;
    }
};