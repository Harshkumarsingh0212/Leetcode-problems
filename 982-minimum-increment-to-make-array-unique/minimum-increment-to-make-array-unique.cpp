class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int, int> mp;
        for (auto x : nums) mp[x]++;
        
        int ans = 0;
        
        for (auto& [val, count] : mp) {
            if (count > 1) {
                int duplicates = count - 1;
                ans += duplicates;          
                mp[val + 1] += duplicates;  
            }
        }
        
        return ans;
    }
};