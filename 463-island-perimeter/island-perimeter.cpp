class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        int n=grid.size();
        int m=grid[0].size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0) continue;
                for(int k=0;k<4;k++)
                {
                    int nrow=i+drow[k];
                    int ncol=j+dcol[k];
                    if(nrow<0 ||nrow>=n ||ncol<0||ncol>=m)
                    {
                        sum++;
                    }else
                    {
                        if(grid[i][j]==1 &&nrow>=0 &&nrow<n&&ncol>=0&&ncol<m )
                        {
                            if(grid[nrow][ncol]==0)
                            {
                                sum++;
                            }
                        }
                    }
                }
            }
        }
        return sum;
    }
};