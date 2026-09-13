class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>ans(n,vector<int>(n));
        vector<vector<int>>temp(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               int k=rowShift[i];
               
               temp[i][(j-k+n)%n]=grid[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               int a=colShift[j];
               
               ans[(i-a+n)%n][j]=temp[i][j];
            }
        }
        return ans;
    }
};