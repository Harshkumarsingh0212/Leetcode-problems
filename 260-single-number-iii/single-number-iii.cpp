class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       unsigned int ans=0;
        for(auto x:nums)
        {
            ans^=x;
        }
        unsigned int msk=ans&(-ans);
        int a=0;
        int b=0;
        for(auto x:nums)
        {
            if(x&msk)
            {
                a^=x;
            }else
            {
                b^=x;
            }
        }
        return {a,b};
    }
};
