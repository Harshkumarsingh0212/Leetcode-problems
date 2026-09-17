class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp;
        for(auto x:s)mp[x]++;
        int ans=INT_MAX;
        unordered_map<char,int> used;

        for(int i=0;i<target.size();i++)
        {
            used[target[i]]++;
           ans=min(ans,mp[target[i]]/used[target[i]]);
      
        }
        return ans;
    }
};