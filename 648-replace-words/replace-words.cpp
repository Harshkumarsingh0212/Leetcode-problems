class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string,int>mp;
        for(string x:dictionary)mp[x]++;
        string ans="";
        for(int i=0;i<sentence.size();i++)
        {
            string temp="";
            int l=i;
            while(l<sentence.size()&&sentence[l]!=' ')
            {
                temp+=sentence[l];
                if(mp.find(temp)!=mp.end())
                {
                    ans+=temp;
                    break;
                }
                l++;
            }
            while (l < sentence.size() && sentence[l] != ' ') {
                    l++;
                }
            if(mp.find(temp)==mp.end())
            {
                
                ans+=temp;
            }
            i=l;
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};