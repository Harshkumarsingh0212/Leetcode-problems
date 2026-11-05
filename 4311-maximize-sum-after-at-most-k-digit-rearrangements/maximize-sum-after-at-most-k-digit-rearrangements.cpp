class Solution {
    int rearr(int n)
    {
        string s=to_string(n);
        sort(s.begin(),s.end(),greater<char>());
        return stoi(s);
    }
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<pair<int,int>>diff;
        for(int i=0;i<nums.size();i++)
        {
            diff.push_back({rearr(nums[i])-nums[i],rearr(nums[i])});
        }
        sort(diff.begin(),diff.end(),greater<pair<int,int>>());
        long long sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=diff[i].second;
        }
        for(int i=k;i<diff.size();i++)
        {
            sum+=diff[i].second-diff[i].first;
        }
        return sum;
    }
};