class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        unordered_map<int,int>mp;
        int count=0;
        mp[0]=1;
        for(int r1=0;r1<n;r1++)
        {
            vector<int>temp(m,0);
            for(int r2=r1;r2<n;r2++)
            {
                
              for(int col=0;col<m;col++)
              {
                temp[col]+=matrix[r2][col];
              }
              mp.clear();
              mp[0]=1;
              int sum=0;
             for(int i=0;i<temp.size();i++)
             {
                sum+=temp[i];
              if(mp.find(sum-target)!=mp.end()) count+=mp[sum-target];
               mp[sum]++;
             }
             
            }
        }
        return count;
    }
};