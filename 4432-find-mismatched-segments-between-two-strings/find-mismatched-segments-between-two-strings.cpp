class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> res;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==s2[i]) continue;
            int l=i;
            string temp1="";
            string temp2="";
            while(l<s1.size()&&s1[l]!=s2[l])
            {
                temp1+=s1[l];
                temp2+=s2[l];
                l++;
            }
            res.push_back({temp1,temp2});
            i=l;
        }
        return res;
    }
};