class Solution {
int solve(int ind,int k,int cnt,long long value,string&s,vector<vector<int>>&dp)
{
    if(ind<0) return 0;
    if(dp[ind][cnt]!=-1) return dp[ind][cnt];
    int left=solve(ind-1,k,cnt,value,s,dp);
    long long news=value+((s[ind]=='1') ? (cnt<31 ? (1LL<<cnt) : 1e18) : 0);
    int right=0;
    if(news<=k)
    {
        right=solve(ind-1,k,cnt+1,news,s,dp)+1;
    }
    return dp[ind][cnt]=max(left,right);
}
public:
    int longestSubsequence(string s, int k) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(n-1,k,0,0,s,dp);
    }
};