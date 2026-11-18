class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int total=0;
        int currend=intervals[0][1];
        int currstart=intervals[0][0];
        vector<vector<int>>res;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=currend)
            {
                currend=max(currend,intervals[i][1]);
            }else
            {
               res.push_back({currstart,currend});
                currstart=intervals[i][0];
                currend=intervals[i][1];
            }
        }
        res.push_back({currstart,currend});
        return res;
    }
};