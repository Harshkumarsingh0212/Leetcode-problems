class Solution {
    bool check(long long k,long long mid,vector<int>&arr)
    {
        long long sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=(arr[i]/mid);

        }
        if(sum>=k) return true;
        else return false;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum=0;
        
        for(auto x:candies) sum+=x;
        if(sum<k) return 0;
         long long h = *max_element(candies.begin(), candies.end());
        long long l=1;
        int ans=h;
        while(l<=h)
        {
            long long mid=l+(h-l)/2;
            if(check(k,mid,candies))
            {
              ans=mid;
              l=mid+1;
            }else
            {
                h=mid-1;
            }
        }
        return ans;
    }
};