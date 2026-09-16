class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
       sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        int maxi=intervals[0][1];                       
        for(int i=0;i<intervals.size()-1;i++)
        {
            
            
                if(maxi>=intervals[i+1][1]) n--;         
                else maxi=intervals[i+1][1];
            
        }
        return n;
    }
};