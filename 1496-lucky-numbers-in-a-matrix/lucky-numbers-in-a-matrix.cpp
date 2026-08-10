class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>col(matrix[0].size(),-1);
        vector<int> ans;
        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                col[i]=max(col[i],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                int mini=*min_element(matrix[i].begin(),matrix[i].end());
                if(matrix[i][j]==mini&&matrix[i][j]==col[j]) ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};