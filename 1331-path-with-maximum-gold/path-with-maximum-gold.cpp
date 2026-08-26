class Solution {
    int solve(int i,int j,vector<vector<bool>>&mark,vector<vector<int>>&grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i<0||j<0||i>=n||j>=m) return 0;
        int drow[]={0,-1,0,1};
        int dcol[]={-1,0,1,0};
       int ans=0;
                for(int k=0;k<4;k++)
                {
                    int nrow=drow[k]+i;
                    int ncol=dcol[k]+j;
                    if(nrow>=0 &&nrow<n&&ncol>=0&&ncol<m&&!mark[nrow][ncol]&&grid[nrow][ncol]!=0)
                    {
                        mark[nrow][ncol]=1;
                        ans=max(ans,solve(nrow,ncol,mark,grid));
                        mark[nrow][ncol]=0;
                    }
        }
        return grid[i][j]+ans;
    }
 

public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>mark(n,vector<bool>(m,0));
       int ans = 0;

         for(int i=0; i<n; i++)
              {
               for(int j=0; j<m; j++)
               {
                 if(grid[i][j] != 0)
                  {
            mark[i][j] = 1;
            ans = max(ans, solve(i, j, mark, grid));
            mark[i][j] = 0;
        }
    }
}
          return ans;
    }
};