class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total=0;
        
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=INT_MAX;
        long long prefix=0;
        for(auto x:nums) total+=x;
        int rem=total%p;
        if(total%p==0) return 0;
        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
            int target=(prefix%p-rem+p)%p;
            if(mp.find(target)!=mp.end())
            {
                ans=min(i-mp[(target)%p],ans);
            }
            mp[(prefix)%p]=i;
        }
        if(ans!=INT_MAX &&ans<nums.size()) return ans;
        else return -1;

    }
};