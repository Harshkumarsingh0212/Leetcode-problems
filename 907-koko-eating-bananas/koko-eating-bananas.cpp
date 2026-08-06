class Solution {
    bool check(int h,int n,vector<int>&arr)
    {
        long long sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=(arr[i]+n-1)/n;
        }
        if(sum<=h) return true;
        else return false;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int l=1;
       int hi=*max_element(piles.begin(),piles.end());
       int ans=hi;
       while(l<=hi)
       {
        int mid=l+(hi-l)/2;
        if(check(h,mid,piles))
        {
            ans=mid;
            hi=mid-1;

        }else
        {
            l=mid+1;

        }
       }
       return ans;
    }
};