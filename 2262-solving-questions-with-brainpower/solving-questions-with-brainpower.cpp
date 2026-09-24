class Solution {
    long long solve(int ind,vector<int>&arr,vector<int>&brain,vector<long long>&dp)
    {
        if(ind>=arr.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];
        long long left=solve(ind+1,arr,brain,dp);
        long long right=solve(ind+brain[ind]+1,arr,brain,dp)+arr[ind];
        return dp[ind]=max(left,right);
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<int>points;
        vector<int>brain;
        for(int i=0;i<n;i++)
        {
            points.push_back(questions[i][0]);
            brain.push_back(questions[i][1]);
        }
        vector<long long>dp(n,-1);
        return solve(0,points,brain,dp);
    }
};