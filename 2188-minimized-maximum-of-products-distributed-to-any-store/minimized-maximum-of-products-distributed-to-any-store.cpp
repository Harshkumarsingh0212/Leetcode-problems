class Solution {
    bool check(int n,int mid,vector<int>&arr)
    {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=(arr[i]+mid-1)/mid;
           
        }
         if(sum<=n) return true;
       else return false;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l=1;
        int h=*max_element(quantities.begin(),quantities.end());
        int ans=h;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(check(n,mid,quantities))
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