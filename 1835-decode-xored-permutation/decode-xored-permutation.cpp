class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int all=0;
        int n=encoded.size()+1;
        for(int i=1;i<=n;i++)
        {
            all^=i;
        }
        int first=0;
        for(int i=0;i<encoded.size();i++)
        {
            if(i%2!=0)
            {
                first^=encoded[i];
            }
        }
        vector<int>perm(n);
        perm[0]=all^first;
        for(int i=1;i<n;i++)
        {
            perm[i]=perm[i-1]^encoded[i-1];
        }
        return perm;
    }
};