class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int,int>> nums1,nums2;
        for(int i=0;i<img1.size();i++)
        {
            for(int j=0;j<img1.size();j++)
            {
                if(img1[i][j]==1) nums1.push_back({i,j});
                if(img2[i][j]==1) nums2.push_back({i,j});
            }
        }
        map<pair<int,int>,int>mp;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int dr=nums2[j].first-nums1[i].first;
                int dc=nums2[j].second-nums1[i].second;
                mp[{dr,dc}]++;

            }
        }
        int ans=0;
        for(auto x:mp)
        {
            ans=max(ans,x.second);
        }
        return ans;
    }
};