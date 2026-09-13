class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        int count=0;
        for(auto x:mp)
        {
            if(x.second.size()>=3)
            {
                int l=0;
                int diff=x.second[l+1]-x.second[l];
                l++;
                bool ok=true;
                while(l+1<x.second.size())
                {
                   if(x.second[l+1]-x.second[l]!=diff) ok=false;
                   l++;
                }
                if(ok) count++;
            }
        }
        return count;
    }
};