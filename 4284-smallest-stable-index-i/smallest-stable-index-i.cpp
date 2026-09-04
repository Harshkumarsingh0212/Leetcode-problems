class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int prefix=0;
        for(int i=0;i<nums.size();i++)
        {
            prefix=max(prefix,nums[i]);
            int mini=*min_element(nums.begin()+i,nums.end());
            int stbl=prefix-mini;
            if(stbl<=k)
            {
                return i;
            }
        }
        return -1;
    }
};