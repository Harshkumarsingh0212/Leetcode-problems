class Solution {
    
public:
    int largestCombination(vector<int>& candidates) {
        int ans=0;
        for(int i=0;i<31;i++)
        {
            int count=0;
            for(int j=0;j<candidates.size();j++)
            {
                if((1<<i)&candidates[j])
                {
                    count++;
                }
            }
            ans=max(ans,count);

        }
        return ans;
    }
};