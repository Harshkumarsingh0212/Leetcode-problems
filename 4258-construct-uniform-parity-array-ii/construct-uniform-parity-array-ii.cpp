class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       
      int mini=*min_element(nums1.begin(),nums1.end());
      bool odd=false;
      bool even=false;
      for(auto x:nums1)
      {
        if(x%2==0) even=true;
        else odd=true;
        if(odd && even) break;
      }
      if(odd && even)
      {
        if(mini%2!=0) return true;
        else return false;
      }

        return true;
    }
};