class Solution {
    void solve(int ind,char prev,string temp,vector<string>&ans)
    {
        if(ind==0)
        {
            ans.push_back(temp);
            return;
        }
        if(prev!='a')
        {
            temp+='a';
            solve(ind-1,'a',temp,ans);
            temp.pop_back();
        }
         if(prev!='b')
        {
            temp+='b';
            solve(ind-1,'b',temp,ans);
            temp.pop_back();
        }
        if(prev!='c')
        {
            temp+='c';
            solve(ind-1,'c',temp,ans);
            temp.pop_back();
        }
    }
public:
    string getHappyString(int n, int k) {
        string temp="";
        vector<string>ans;
        solve(n,' ',temp,ans);
        sort(ans.begin(),ans.end());
        if(k > ans.size())
            return "";

        return ans[k-1];
    }
};