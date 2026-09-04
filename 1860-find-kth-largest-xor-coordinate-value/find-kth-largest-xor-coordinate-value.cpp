class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>prefix(n+1,vector<int>(m+1));
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                prefix[i+1][j+1]=prefix[i][j]^matrix[i][j]^prefix[i+1][j]^prefix[i][j+1];
                pq.push(prefix[i+1][j+1]);
            }
        }
        while(k>1)
        {
            pq.pop();
            k--;
        }
        return pq.top();
    }
};