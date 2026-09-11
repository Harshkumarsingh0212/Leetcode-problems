class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> prefix;
        for(int i=0;i<n;i++)
        {
            long long sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                prefix.push_back(sum);
            }
        }
        sort(prefix.begin(),prefix.end());
        long long ans=0;
        for(int i=left-1;i<right;i++)
        {
            ans+=prefix[i];
        }
        return ans%1000000007;
    }
};