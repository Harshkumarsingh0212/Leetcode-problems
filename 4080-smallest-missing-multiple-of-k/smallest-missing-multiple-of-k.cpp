class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int l=k;
        while(true)
        {
            
            if(mp.find(l)==mp.end()) return l;
            else l+=k;

        }
        return 0;
    }
};