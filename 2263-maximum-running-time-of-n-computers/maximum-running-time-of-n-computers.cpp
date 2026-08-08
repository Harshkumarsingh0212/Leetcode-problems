class Solution {
    bool check(int n,long long mid,vector<int>&arr)
    {
         long long sum=0;
        for(auto x:arr)     sum+=min((long long)x,mid);
     
        if(sum>=n*mid*1LL) return true;
         return false;
    }
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long l=1;
        long long sum=0;
        for(auto x:batteries) sum+=x;
        long long h=sum/n;
        long long ans=sum/n;

        while(l<=h)
        {
            long long mid=l+(h-l)/2;
            if(check(n,mid,batteries))
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