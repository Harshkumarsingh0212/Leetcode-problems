class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>prefix(n+1,vector<int>(m+1));
       
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                prefix[i+1][j+1]=prefix[i+1][j]+prefix[i][j+1]+grid[i][j]-prefix[i][j];
                if(prefix[i+1][j+1]<=k)count++;
            }
        }
        return count;
    }
};