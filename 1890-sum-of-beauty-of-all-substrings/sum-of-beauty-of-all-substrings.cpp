class Solution {
    int diff(string &s)
    {
        vector<int> freq(26, 0);
        for(auto x:s) freq[x-'a']++;
        int maxi=*max_element(freq.begin(),freq.end());
        int mini=INT_MAX;
        for(int x:freq)
        {
         if(x>0)
         {
            mini=min(mini,x);
         }
        }
        return maxi-mini;
    }
public:
    int beautySum(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            string temp="";
            for(int j=i;j<s.size();j++)
            {
                temp+=s[j];
                count+=diff(temp);
            }
        }
        return count;
    }
};