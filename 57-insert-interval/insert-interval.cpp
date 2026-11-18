class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res;
       int l=0;
       int n=intervals.size();
       while(l<n && intervals[l][1]<newInterval[0]){
        res.push_back(intervals[l]);
        l++;
       }
       while(l<n && intervals[l][0]<=newInterval[1])
       {
        newInterval[0]=min(intervals[l][0],newInterval[0]);
        newInterval[1]=max(intervals[l][1],newInterval[1]);
        l++;

       }
       res.push_back(newInterval);
    
       while(l<n)
       {
        res.push_back(intervals[l]);
        l++;
       }
         return res;
    }
};