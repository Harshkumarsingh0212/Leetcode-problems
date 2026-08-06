class Solution {
    bool check(int m,int k,int n,vector<int>&arr)
    {
        int boq=0;
        int flowers=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=n) flowers++;
            else flowers=0;
             if(flowers==k)
        {
            boq++;
            flowers=0;
        }
        }
       
        if(boq>=m) return true;
        else return false;

    }
    
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
    return -1;
     int l=*min_element(bloomDay.begin(),bloomDay.end());
     int h=*max_element(bloomDay.begin(),bloomDay.end());
     int ans=h;
     while(l<=h)
     {
        int mid=l+(h-l)/2;
        if(check(m,k,mid,bloomDay))
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
