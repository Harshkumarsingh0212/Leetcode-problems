class Solution {
    int solve(int ind,string&s,vector<int>&dp,vector<int>&last)
    {
        
        if(ind<0) return 1;
        if(dp[ind]!=-1) return dp[ind];
       int left=2LL*solve(ind-1,s,dp,last);
        if(last[s[ind]-'a']!=-1)
        {
            left-=solve(last[s[ind]-'a']-1,s,dp,last);
        }
        last[s[ind]-'a']=ind;
        return dp[ind]=(left + 1000000007LL)%1000000007LL;
    }
public:
    int distinctSubseqII(string s) {
        int n=s.size();
        vector<int>dp(n,-1);
        vector<int>last(26,-1);
       
        return (solve(n - 1, s, dp, last) - 1 + 1000000007LL) % 1000000007LL;
        
    }
};