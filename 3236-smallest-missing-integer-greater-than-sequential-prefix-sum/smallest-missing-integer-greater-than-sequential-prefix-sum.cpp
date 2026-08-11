class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int maxi=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            int sum=0;
            if(nums[i+1]==nums[i]+1){
                sum+=nums[i];
                int l=i+1;
                while(l<nums.size()-1&&nums[l+1]==nums[l]+1){
                    sum+=nums[l];
                    l++;
                }
                sum+=nums[l];
                maxi=sum;
                break;
            }
            else{
                break;
            }
        }
        while(true){
            if(mp.find(maxi)==mp.end()) return maxi;
            else maxi++;
        }
        return 0;
    }
};