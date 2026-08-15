class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int left=0;
        
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans^=nums[i];
            
          
        }
        int n=nums.size();
        if(ans!=0) return n;
        int count=n;
        for(int i=0;i<n;i++)
        {
            if((ans ^= nums[i]) > 0)return count-1;
            
        }
        return 0;
    }
};