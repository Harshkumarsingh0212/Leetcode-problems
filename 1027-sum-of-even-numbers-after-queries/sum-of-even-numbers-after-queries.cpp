class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int eventsum=0;
        for( auto x:nums)if(x%2==0) eventsum+=x;
        vector<int> res;
        for(int i=0;i<queries.size();i++)
        {
            int ind=queries[i][1];
            int ans=nums[ind]+queries[i][0];
            if(ans%2==0)
            {
                if(nums[ind]%2==0) eventsum=eventsum-nums[ind]+ans;
                else eventsum=eventsum+ans;
                
               
            }else
            {

                if(nums[ind]%2==0) eventsum-=nums[ind];
            }
            nums[ind]=ans;
             res.push_back(eventsum);
        }
        return res;
    }
};