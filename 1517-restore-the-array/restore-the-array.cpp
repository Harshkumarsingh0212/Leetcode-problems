class Solution {
    const int MOD = 1e9 + 7;
    int solve(int ind, long long curr, int k, string &s, vector<int> &dp)
    {
        if (ind >= s.size()) return curr > 0 ? 1 : 0;
        if (curr == 0 && dp[ind] != -1) return dp[ind];

        long long news = curr * 10 + (s[ind] - '0');
        int left = 0, right = 0;
        if (news > 0 && news <= k) {
            right = solve(ind + 1, news, k, s, dp);  
            left  = solve(ind + 1, 0, k, s, dp);     
        }

        int res = (left + right) % MOD;
        if (curr == 0) dp[ind] = res;
        return res;
    }
public:
    int numberOfArrays(string s, int k) {
        int n = s.size();
        vector<int> dp(n, -1);
        return solve(0, 0, k, s, dp);
    }
};