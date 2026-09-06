class Solution {
    int solve(int ind,int  temp,string&s,string&t,vector<vector<int>>&dp)
    {
        if(temp==t.size()) return 1;
        if(ind==s.size()) return 0;
        
        if(dp[ind][temp]!=-1) return dp[ind][temp];
        int left=solve(ind+1,temp,s,t,dp);
        int right=0;
        if(s[ind]==t[temp])
        {
         right=solve(ind+1,temp+1,s,t,dp);
        }
     
        return dp[ind][temp]=left+right;

    }
public:
    int numDistinct(string s, string t) {
       int n=s.size();
       int m=t.size();
       vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(0,0,s,t,dp);
    }
};