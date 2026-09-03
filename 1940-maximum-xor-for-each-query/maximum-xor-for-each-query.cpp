class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>prefix(nums.size());
        prefix[0]=nums[0];
        int ans=pow(2,maximumBit)-1;
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]^nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            prefix[i]=prefix[i]^ans;
        }
        reverse(prefix.begin(),prefix.end());
        return prefix;
    }
};