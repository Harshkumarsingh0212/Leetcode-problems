class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int mini=*min_element(nums.begin(),nums.end());
       int maxi=*max_element(nums.begin(),nums.end());
       bool mine=false;
       bool maxe=false;
       int count1=0;
       int count2=0;
       int count3=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==mini) mine=true;
        if(nums[i]==maxi) maxe=true;
        count1++;
        if(mine && maxe) break;
       }
         mine=false;
        maxe=false;
       for(int i=nums.size()-1;i>=0;i--)
       {
           if(nums[i]==mini) mine=true;
        if(nums[i]==maxi) maxe=true;
        count2++;
        if(mine && maxe) break;
       }
       int l=0;
       int h=nums.size()-1;
      mine=false;
      maxe=false;
      int mindx=-1;
      int maxdx=-1;
       while(l<=h)
       {
        if(nums[l]==mini && mine==false)
        {
            mine=true;
            mindx=l;
            
        }else if(nums[l]==maxi && maxe==false)
        {
            maxe=true;
            maxdx=l;
            
            
        }
        if(nums[h]==mini &&mine==false)
        {
            mine=true;
            mindx=h;
            
           

        }else if(nums[h]==maxi && maxe==false)
        {
            maxe=true;
            maxdx=h;
            
        }
        l++;
        h--;
        
        if(mine&&maxe) break;
       }
        count3 = min(mindx, maxdx) + 1
       + nums.size() - max(mindx, maxdx);
       return min(count1,min(count2,count3));
    }
};