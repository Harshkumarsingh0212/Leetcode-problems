class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int>mask;
        for(int i=0;i<words.size();i++)
        {
            int bits=0;
            for(auto x:words[i])
            {
            bits |= (1 << (x - 'a'));
            }
            mask.push_back(bits);

        }
        int maxi=0;
        for(int i=0;i<mask.size();i++)
        {
            for(int j=i+1;j<mask.size();j++)
            {
              if(!(mask[i]&mask[j]))
              {
                int product = words[i].size() * words[j].size();
                maxi=max(product,maxi);
              }
            }
        }
        return maxi;
    }
};