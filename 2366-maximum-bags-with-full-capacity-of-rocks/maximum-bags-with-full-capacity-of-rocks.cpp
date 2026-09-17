class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<pair<int,int>> v;

        for(int i = 0; i < rocks.size(); i++)
        {
            v.push_back({capacity[i] - rocks[i], 0});   
        }

        sort(v.begin(), v.end());

        int count = 0;

        for(int i = 0; i < v.size(); i++)
        {
            if(v[i].first - v[i].second <= 0) {
                count++;
            }
            else
            {
                if(v[i].first - v[i].second <= additionalRocks)
                {
                    count++;
                    additionalRocks -= v[i].first - v[i].second;
                }
            }
        }

        return count;
    }
};