class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        vector<vector<int>> arr(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            arr[i][0] = timeSeries[i];
            arr[i][1] = timeSeries[i] + duration - 1;
        }
       
        int total = 0;
        int currstart = arr[0][0];
        int currend = arr[0][1];
        for (int i = 1; i < n; i++) {
            if (arr[i][0] <= currend) {
                currend = max(arr[i][1], currend);

            } else {
                total += currend - currstart+1;
                currend = arr[i][1];
                currstart = arr[i][0];
            }
        }
        total+=currend-currstart+1;
        return total;
    }
};