class Solution {
    bool check(vector<int>&arr,int n,int threshold)
    {
        int sum=0;
       
         for(int i=0;i<arr.size();i++)
         {
            sum+=((arr[i]+n-1)/n);
         }
         if(sum<=threshold) return true;
         else return false;

    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
     int l=1;
    
   int h=*max_element(nums.begin(),nums.end());
     
     int ans=h;
     while(l<=h)
     {
        int mid=l+(h-l)/2;
        if(check(nums,mid,threshold))
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
