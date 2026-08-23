class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        vector<vector<int>>ans;
        for(int i=lower;i<=upper;i++)
        
            if(mp.find(i)==mp.end())
            {
                int low=i;
                int l=i;
                while(l<=upper && mp.find(l)==mp.end())
                {
                    l++;
                }
                int h=l-1;
               i=l-1;
                ans.push_back({low,h});
            }
        
        return ans;
    }
};