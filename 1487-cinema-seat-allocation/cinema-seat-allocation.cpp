class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,set<int>>mp;
        long long count=0;
        for(int i=0;i<reservedSeats.size();i++)
        {
            mp[reservedSeats[i][0]].insert(reservedSeats[i][1]);
        }
        count = 2LL*(n - (long long)mp.size());
        for(auto &e : mp)
        {
            int i = e.first;
            bool middle=true;
            for(int j=4;j<=7;j++)
            {
                if(mp[i].find(j)!=mp[i].end())
                {
                    middle=false;
                    break;
                }
            }
            bool left=true;
            bool right=true;
            for(int j=2;j<=5;j++)
            {
                if(mp[i].find(j)!=mp[i].end())
                {
                    left=false;
                    break;
                }
            }
            for(int j=6;j<=9;j++)
            {
                if(mp[i].find(j)!=mp[i].end())
                {
                    right=false;
                    break;
                }
            }
            if(left && right)
                count += 2;
            else if(left || middle || right)
                count += 1;
        }
        return (int)count;
    }
};