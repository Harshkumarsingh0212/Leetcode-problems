class Solution {
    int itis(int n)
    {
        int c=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n/=2;
            }else
            {
                n=n*3+1;
            }
            c++;
        }
        return c;
    }
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> ans;
        for(int i=lo;i<=hi;i++)
        {
              ans.push_back({itis(i),i});
        }
        sort(ans.begin(),ans.end());
        return ans[k-1].second;
    }
};