class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int left=0;
        int maxi=-1;
        unordered_map<int,int>mp;
        
        for(int i=0;i<=nums.size()-k;i++)
        {
            set<int>st;
            for(int j=i;j<i+k;j++)
            {
                st.insert(nums[j]);
            }
            for(auto x:st)
            {
                mp[x]++;
            }
        }
        for(auto x:mp)
        {
            if(x.second==1)
            {
                maxi=max(maxi,x.first);
            }
        }
        return maxi;
    }
};