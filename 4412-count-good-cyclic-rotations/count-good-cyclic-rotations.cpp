class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int k=n/2;
        long long total=0;
        for(auto x:nums) total+=x;
          long long first=0;
        for(int i=0;i<k;i++)
        {
           first+=nums[i];
        }
        int count=0;
       for(int i=0;i<n;i++)
       {
        if(first>total-first) count++;
        first-=nums[i];
        first+=nums[(i+k)%n];
       }
      return count;
    }
};