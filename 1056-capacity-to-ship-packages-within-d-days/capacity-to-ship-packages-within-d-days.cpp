class Solution {
    bool check(int days,int ans,vector<int>&arr)
    {
        int sum=0;
        int day=1;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum>ans)
            {
              day++;
              sum=0;
              sum+=arr[i];
            }
            
        }
        if(day<=days) return true;
            else return false;
    }
    
    

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(auto x:weights) sum+=x;
        int h=sum;
        int ans=sum;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(check(days,mid,weights))
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};
