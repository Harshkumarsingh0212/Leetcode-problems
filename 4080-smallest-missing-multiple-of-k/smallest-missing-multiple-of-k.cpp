class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
     unordered_set<int>mp(nums.begin(),nums.end());
        int l=k;
        while(true)
        {
            
            if(mp.find(l)==mp.end()) return l;
            else l+=k;

        }
        return 0;
    }
};