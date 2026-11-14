class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
     
       
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
             int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                  sum+=nums[j];
                  int length=j-i+1;
                  if(length>=l &&length<=r &&sum>0) mini=min(sum,mini);
            }
        }
     
       if(mini!=INT_MAX) return mini;
       else return -1;
    }
};