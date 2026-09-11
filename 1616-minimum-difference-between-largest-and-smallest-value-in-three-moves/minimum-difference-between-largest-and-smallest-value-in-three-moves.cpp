class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
       int mini1=nums[n-4]-nums[0];
       int mini2=nums[n-1]-nums[3];
       int mini3=nums[n-2]-nums[2];
       int mini4=nums[n-3]-nums[1];
       int mini5=min(mini1,mini2);
       int mini6=min(mini3,mini4);
       return min(mini5,mini6);
    }
};