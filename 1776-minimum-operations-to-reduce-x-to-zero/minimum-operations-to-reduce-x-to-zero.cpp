class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int curr=0;
        for(auto x:nums) sum+=x;
        int rem=sum-x;
        if(rem < 0) return -1;
        if(rem == 0) return nums.size();
        int left=0;
        int maxi=-1;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            while(curr>rem)
            {
                curr-=nums[left];
                left++;
            }
            if(curr==rem)
            {
                maxi=max(maxi,i-left+1);
            }
        }
        return maxi==-1?-1:nums.size()-maxi;
    }
};