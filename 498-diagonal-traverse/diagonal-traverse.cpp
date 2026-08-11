class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>> mp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        for(auto x:mp)
        {
            if(x.first%2==0)
            {int l=0;
                reverse(x.second.begin(),x.second.end());
                
                while(l<x.second.size())
                {
                    ans.push_back(x.second[l]);
                    l++;
                }
            }else
            
            { int l=0;
                while(l<x.second.size())
                {
                    ans.push_back(x.second[l]);
                    l++;
                }

            }
        }
        
        return ans;
    }
};