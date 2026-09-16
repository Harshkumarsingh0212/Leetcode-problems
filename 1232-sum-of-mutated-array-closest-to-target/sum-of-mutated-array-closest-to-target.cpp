class Solution {
    bool check(int target,vector<int>&arr,int ans)
    {
        int sum=0;
       for(int i=0;i<arr.size();i++)
       {
        sum+=min(ans,arr[i]);
       }
       return target<=sum;
       
    }
public:
    int findBestValue(vector<int>& arr, int target) {
        int n=arr.size();
       
        int maxi=*max_element(arr.begin(),arr.end());
        int l=1;
        int h=maxi;
        int ans=maxi;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(target,arr,mid))
            {
                ans=mid;
                h=mid-1;
            }else
            {
                l=mid+1;
            }
        }
        int sum1=0;
        int sum2=0;
        for(auto x:arr)
        {
            sum1+=min(ans,x);
            sum2+=min(ans-1,x);
        }
        if(abs(target-sum1)<abs(target-sum2))
        return ans;
        else return ans-1;
    }
};