class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        vector<vector<int>>res(mat.size(),vector<int>(mat[0].size()));
        for(auto x:mp)
        {
            sort(x.second.begin(),x.second.end());
            int i,j;
            if(x.first>=0)
            {
                i=x.first;
                j=0;
            }else
            {
                i=0;
                j=-x.first;
            }
            
           for(auto it:x.second)
           {
            res[i][j]=it;
            i++;
            j++;

           }
        }
        return res;
    }
};