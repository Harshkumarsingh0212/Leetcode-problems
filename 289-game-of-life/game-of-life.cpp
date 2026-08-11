class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> boar = board;
        int drow[]={-1,-1,-1,0,+1,+1,+1,0};
        int dcol[]={-1,0,+1,+1,+1,0,-1,-1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int sum=0;
                    for(int k=0;k<8;k++)
                    {
                        int nrow=i+drow[k];
                        int ncol=j+dcol[k];
                        if(nrow>=0 &&nrow<n &&ncol>=0 &&ncol<m)
                        {
                          sum+=board[nrow][ncol];
                        }
                    }
                   if(board[i][j]==1)
                   {
                    if(sum<2) boar[i][j]=0;
                    else if(sum>3) boar[i][j]=0;
                   }else
                   {
                    if(sum==3) boar[i][j]=1;

                   }
            }
        }
        board=boar;
    }
};