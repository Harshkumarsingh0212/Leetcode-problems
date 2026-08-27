class Solution {
    bool solve(int i,int j,string&temp,string &word,vector<vector<bool>>&vis,vector<vector<char>>&grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(temp==word) return true;
        if(i<0 ||i>=n||j<0||j>=m) return false;
        int drow[]={0,-1,0,1};
        int dcol[]={-1,0,1,0};
        for(int k=0;k<4;k++)
        {
            int nrow=i+drow[k];
            int ncol=j+dcol[k];
            if(nrow>=0 &&nrow<n && ncol>=0&&ncol<m && vis[nrow][ncol]!=1)
            {
                vis[nrow][ncol]=1;
                temp+=grid[nrow][ncol];
                if(temp.size()<=word.size() &&
                   word.substr(0,temp.size())==temp)
                {
                if(solve(nrow,ncol,temp,word,vis,grid)) return true;
                }
                temp.pop_back();
                vis[nrow][ncol]=0;
            }
            
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vector<vector<bool>>vis(n,vector<bool>(m,0));
                 string temp="";
                 vis[i][j]=1;
                 temp+=board[i][j];
                if(solve(i,j,temp,word,vis,board)) return true;
            }
        }
        return false;
    }
};