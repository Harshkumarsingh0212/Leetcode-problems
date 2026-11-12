class Solution {
    bool inc(vector<int>&arr)
    {
        int l=0;
        while(l+1<arr.size())
        {
            if(arr[l+1]<=arr[l]) return false;
            l++;
        }
          return true;

    }
    bool dec(vector<int>&arr)
    {
        int l=0;
        while(l+1<arr.size())
        {
            if(arr[l+1]>=arr[l]) return false;
            l++;
        }
      return true;
     
    }
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            vector<int>temp;
            for(int j=i;j<nums.size();j++)
            {
              temp.push_back(nums[j]);
              if(inc(temp)||dec(temp))
              {
                int sz=temp.size();
                maxi=max(sz,maxi);
              }
            }
        }
        return maxi;
    }
};