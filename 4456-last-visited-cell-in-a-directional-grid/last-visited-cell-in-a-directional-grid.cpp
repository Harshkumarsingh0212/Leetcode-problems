class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int r=0;
        int c=0;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        vis[0][0]=1;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
               if(grid[r][c]=='L')
               {
                if(c>0 && !vis[r][c-1])
                {
                    c=c-1;
                    vis[r][c]=1;
                }else return {r,c};
               }else 
               if(grid[r][c]=='R')
               {
                if(c+1<grid[0].size() && !vis[r][c+1])
                {
                    c=c+1;
                    vis[r][c]=1;
                }else return {r,c};
               }else 
               if(grid[r][c]=='U')
               {
                if(r>0 && !vis[r-1][c])
                {
                    r=r-1;
                    vis[r][c]=1;
                }else return {r,c};
               }else 
               if(grid[r][c]=='D')
               {
                if(r+1<grid.size() && !vis[r+1][c])
                {
                    r=r+1;
                    vis[r][c]=1;
                }else return {r,c};
               }else return {r,c};
            }
        }
        return {r,c};
    }
};