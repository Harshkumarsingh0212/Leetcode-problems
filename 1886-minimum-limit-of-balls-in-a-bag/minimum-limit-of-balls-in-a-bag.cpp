class Solution {
    bool check(int k,int mid,vector<int>&arr)
    {
        long long sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>mid)
            {
                sum+=((arr[i]+mid-1)/mid)-1;
            }
        }
        if(sum<=k) return true;
        else return false;
    }
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
      int l=1;
      int h=*max_element(nums.begin(),nums.end());
      int ans=h;
      while(l<=h)
      {
        int mid=l+(h-l)/2;
        if(check(maxOperations,mid,nums))
        {
            ans=mid;
            h=mid-1;
        }else
        {
            l=mid+1;
        }
      }
      return ans;
    }
};