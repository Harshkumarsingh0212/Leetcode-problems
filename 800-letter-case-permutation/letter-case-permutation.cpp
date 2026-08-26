class Solution {
    void solve(int ind,string &temp,string&s,vector<string>&ans)
    {
        if(ind==s.size())
        {
            ans.push_back(temp);
            return;
        }
        temp+=tolower(s[ind]);
        solve(ind+1,temp,s,ans);
        temp.pop_back();
        if(isalpha(s[ind])){
        temp+=toupper(s[ind]);
        solve(ind+1,temp,s,ans);
        temp.pop_back();
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        string temp="";
        vector<string>ans;
        solve(0,temp,s,ans);
        return ans;
    }
};