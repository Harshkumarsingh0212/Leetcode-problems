class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        vector<int>ans;
        while(l<=h)
        {
            if(nums[l]*nums[l]>=nums[h]*nums[h])
            {
                ans.push_back(nums[l]*nums[l]);
                l++;
            }else
            {
                ans.push_back(nums[h]*nums[h]);
                h--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};