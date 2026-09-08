class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int>mp;
        unordered_map<string,int>mp1;
        for(auto x:banned) 
        {
            for(auto &c : x)
           c = tolower(c);
            mp1[x]++;
        }
         
        for(int i=0;i<paragraph.size();i++)
        {
            string temp="";
            int l=i;
                while(l < paragraph.size() && isalpha(paragraph[l]))
                {
                    temp+=tolower(paragraph[l]);
                    l++;
                }
            i=l;
          
            if(temp != "" && mp1.find(temp) == mp1.end()) mp[temp]++;
               
            
           
        }
        int maxi=0;
        string ans="";
        for(auto x:mp)
        {
          
          if(x.second>maxi)
          {
            maxi=x.second;
            ans=x.first;
          }
        }
        return ans;
    }
};