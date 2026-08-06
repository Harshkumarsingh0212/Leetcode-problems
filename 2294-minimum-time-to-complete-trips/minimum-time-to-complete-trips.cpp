class Solution {
    bool check(int total, long long n, vector<int>& arr)
    {
        long long sum=0;
        for(int i=0;i<arr.size();i++)
        {
           sum+=n/arr[i];
           if(sum>=total) return true;

        }
        return false;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long sum=0;
        long long l=1;
        
        
        for(auto x:time) sum+=x;
        long long h=sum*totalTrips;
        long long ans=h;
        while(l<=h)
        {
            long long mid=l+(h-l)/2;
            if(check(totalTrips,mid,time))
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