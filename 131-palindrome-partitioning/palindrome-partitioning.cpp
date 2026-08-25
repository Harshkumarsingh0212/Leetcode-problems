class Solution {
    bool ispalindrome(string s)
    {
        if(s.size()==1) return true;
        int l=0;
        int h=s.size()-1;
        while(l<=h)
        {
            if(s[l]!=s[h]) return false;
            l++;
            h--;
        }
        return true;
    }
   void solve(int ind, string& s, vector<string>& temp,
           vector<vector<string>>& ans)
    {
        if(ind==s.size())
        {
            ans.push_back(temp);
            return;
        }
       string rem="";
       for(int i=ind;i<s.size();i++){
        rem+=s[i];
        if(ispalindrome(rem))
        {
            temp.push_back(rem);
            solve(i+1,s,temp,ans);
            temp.pop_back();
        }
        
       }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
     vector<string>temp;
        solve(0,s,temp,ans);
        return ans;

    }
};