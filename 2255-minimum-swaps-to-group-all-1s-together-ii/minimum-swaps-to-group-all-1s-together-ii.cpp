class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones=0;
        for(auto x:nums) if(x==1)  ones++;
        int m=nums.size();
        for(int i=0;i<m;i++)
        {
            nums.push_back(nums[i]);
        }
        int n=nums.size();
        int l=0;
        int ans=0;
        int cnt=0;
       
        for(int i=0;i<n;i++)
        {
            if(nums[i%n]==1)
            {
                cnt++;
            }
            if(i-l+1>ones)
            {
                if(nums[l]==1) cnt--;
                l++;
            }
            ans=max(ans,cnt);
        }
         return ones-ans;
    }
};