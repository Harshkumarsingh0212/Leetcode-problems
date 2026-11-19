class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int currstart=meetings[0][0];
        int currend=meetings[0][1];
        int total=meetings[0][0]-1;
        for(int i=1;i<meetings.size();i++)
        {
            if(meetings[i][0]<=currend)
            {
                currend=max(meetings[i][1],currend);
            }else{
                total+=meetings[i][0]-currend-1;
                currstart=meetings[i][0];
                currend=meetings[i][1];
            }
        }
        total+=days-currend;
        return total;
    }
};