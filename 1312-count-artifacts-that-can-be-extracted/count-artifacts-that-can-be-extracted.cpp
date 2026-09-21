class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        int ans=0;
        set<pair<int,int>> mp;
        for(int i=0;i<dig.size();i++)
        {
            mp.insert({dig[i][0],dig[i][1]});
        }
        for(int i=0;i<artifacts.size();i++)
        {
            int count=0;
            for(int j=artifacts[i][0];j<=artifacts[i][2];j++)
            {
                
                for(int k=artifacts[i][1];k<=artifacts[i][3];k++)
                {
                    if(mp.find({j,k})!=mp.end())
                    {
                        count++;
                    }
                }
            }
            int diff = (artifacts[i][2] - artifacts[i][0] + 1) *
           (artifacts[i][3] - artifacts[i][1] + 1);
            if(count==diff) ans++;
        }
        return ans;
    }
};