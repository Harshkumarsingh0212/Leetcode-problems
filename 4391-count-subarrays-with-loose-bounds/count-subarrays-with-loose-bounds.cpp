class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int left=0;
        int right=0;
        long long ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
         left=i; right=i;
        while(right<nums.size() && nums[left]>=minK &&nums[right]<=maxK)
        {
            left++;
            right++;

        }
        long long len=right-i;
        ans+=len*(len+1)/2;
        i=right;
        }
return ans;
    }
};