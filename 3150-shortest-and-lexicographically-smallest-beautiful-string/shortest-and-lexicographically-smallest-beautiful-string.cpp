class Solution {
   bool issmaller(string &a, string &b)
{
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] < b[i]) return true;
        if(a[i] > b[i]) return false;
    }
    return false;
}
public:
    string shortestBeautifulSubstring(string s, int k) {
        int ones=0;
        int mini=INT_MAX;
        int left=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') ones++;
            while(ones==k)
            {
                if(i-left+1<mini)
                {
                    mini=i-left+1;
                    ans=s.substr(left,i-left+1);
                }else if(i-left+1==mini)
                {
                    string curr=s.substr(left,i-left+1);
                    if(issmaller(curr,ans))
                    {
                        ans=s.substr(left,i-left+1);
                    }
                }
                if(s[left]=='1') ones--;
                left++;
            }

          
        }
        return ans;
    }
};