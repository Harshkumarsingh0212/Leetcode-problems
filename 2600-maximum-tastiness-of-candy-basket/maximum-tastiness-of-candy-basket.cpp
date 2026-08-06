class Solution {
    bool check(int k,int mid,vector<int>&arr)
    {
        int first=arr[0];
        int count=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-first>=mid) 
            {count++;
            first=arr[i];
            }
            if(count==k ) return true;
        }
        return false;
    }
   
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(),price.end());
        int n=price.size();
        int l=0;
        int h=price[n-1]-price[0];
        int ans=0;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(check(k,mid,price)){
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