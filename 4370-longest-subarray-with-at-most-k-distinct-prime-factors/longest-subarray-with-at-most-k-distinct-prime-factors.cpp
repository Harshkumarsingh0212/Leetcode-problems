class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        vector<vector<int>> res(nums.size());
        set<int> st;

        for(int j = 0; j < nums.size(); j++) {
            int x = nums[j];

            for(int i = 2; i * i <= x; i++) {
                if(x % i == 0) {
                    st.insert(i);
                    res[j].push_back(i);
                }

                while(x % i == 0)
                    x /= i;
            }

            if(x > 1) {
                st.insert(x);
                res[j].push_back(x);
            }
        }

        int left = 0;
        unordered_map<int,int> mp;
        int maxi = 0;

        for(int i = 0; i < res.size(); i++) {
            for(auto x : res[i])
                mp[x]++;

            while(mp.size() > k) {
                for(auto x : res[left]) {
                    mp[x]--;

                    if(mp[x] == 0)
                        mp.erase(x);
                }

                left++;
            }

            maxi = max(maxi, i - left + 1);
        }

        return maxi;
    }
};