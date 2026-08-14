class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++){
            mp[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> ans;
        for(auto x:mp)
        {
            int l=x.second.size()-1;
         while(l>=0)
         {
            ans.push_back(x.second[l]);
            l--;
         }
        }
        return ans;
    }
};