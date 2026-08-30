class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int res=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                int l=i;
                int count=0;
                while(l<nums.size()&&nums[l]==nums[i])
                {
                    l++;
                    count++;
                }
                if(count==mp[nums[i]]) res++;
                i=l-1;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if((i == 0 || nums[i] != nums[i-1]) &&
               (i == nums.size()-1 || nums[i] != nums[i+1]))
            {
                if(mp[nums[i]] == 1)
                    res++;
            }
        }
        return res;
    }
};