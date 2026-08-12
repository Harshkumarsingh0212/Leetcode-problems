class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> prefix(n+1, vector<int>(m+1, 0));
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
            prefix[i+1][j+1]=mat[i][j]+prefix[i][j+1]+prefix[i+1][j]-prefix[i][j];
            }
        }
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
           
            for(int j=0;j<m;j++)
            {
                int startr=max(0,i-k);
                int endr=min(n-1,i+k);
                int startc=max(0,j-k);
                int endc=min(m-1,j+k);
                ans[i][j]=prefix[endr+1][endc+1]-prefix[startr][endc+1]-prefix[endr+1][startc]+prefix[startr][startc];
            }
           
        }
        return ans;
    }
};