class Solution {
    void solve(int ind,string &temp,string&s,int k,set<string>&st ,bool &ans)
    {
        if(temp.size()==k)
        {
            if(st.find(temp) == st.end())
                ans = false;
            return;
        }
     
        temp+='0';
        solve(ind+1,temp,s,k,st,ans);
        temp.pop_back();
        temp+='1';
        solve(ind+1,temp,s,k,st,ans);
        temp.pop_back();
    }
public:
    bool hasAllCodes(string s, int k) {
        set<string>st;
        for(int i=0; i+k<=s.size(); i++)
        st.insert(s.substr(i,k));
        string temp = "";
        bool ans = true;
       solve(0,temp,s,k,st,ans);
       return ans;
        
    }
};