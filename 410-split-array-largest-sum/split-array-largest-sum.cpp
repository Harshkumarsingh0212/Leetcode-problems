class Solution {
    bool check(int k,int mid,vector<int>&arr)

    {
        int count=1;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum>mid)
            {
                count++;
                sum=0;
                sum+=arr[i];
            }

        }
        if(count<=k) return true;
        else return false;
    }

public:
    int splitArray(vector<int>& nums, int k) {
    int l=*max_element(nums.begin(),nums.end());
    int sum=0;
    for(auto x:nums) sum+=x;
    int h=sum;
    int ans=sum;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(check( k,mid,nums))
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
