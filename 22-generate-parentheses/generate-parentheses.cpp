class Solution {
    void solve(int n, string &s, int open, int close, vector<string> &ans) {
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (open < n) {
            s.push_back('(');
            solve(n, s, open + 1, close, ans);
            s.pop_back();   
        }

        if (close < open) {
            s.push_back(')');
            solve(n, s, open, close + 1, ans);
            s.pop_back();   
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string> ans;
        solve(n, s, 0, 0, ans);
        return ans;
    }
};