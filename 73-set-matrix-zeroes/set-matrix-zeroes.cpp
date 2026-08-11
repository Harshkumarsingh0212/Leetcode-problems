class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        
        int n=matrix.size();
        int m=matrix[0].size();
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    mp1[i]++;
                    mp2[j]++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mp1.find(i)!=mp1.end()||mp2.find(j)!=mp2.end())
                {
                    matrix[i][j]=0;
                }
            }
        }
     
    }
};