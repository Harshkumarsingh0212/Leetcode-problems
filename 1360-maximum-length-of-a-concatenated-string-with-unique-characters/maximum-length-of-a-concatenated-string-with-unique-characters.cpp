class Solution {
    int solve(int ind,int curr,vector<string>&words,vector<int>&mask)
    {
        
        if(ind<0) return 0;
       int left=solve(ind-1,curr,words,mask);
       int right=0;
       if((mask[ind]&curr)==0)
       {
        right=solve(ind-1,curr|mask[ind],words,mask)+words[ind].size();
       }
        return max(left,right);
    }
public:
    int maxLength(vector<string>& arr) {
        vector<int>mask;
        vector<string>words;
        bool valid=true;
        for(int i=0;i<arr.size();i++)
        {
            int bits=0;
            valid=true;
            for(auto x:arr[i])
            {
                if ((bits & (1 << (x - 'a')))){
                valid=false;
                break;
                }else
                {
                    bits |= (1 << (x - 'a'));
                }
            }
       if(valid)
       {
          mask.push_back(bits);
          words.push_back(arr[i]);
       } 

        }
        return solve(words.size()-1,0,words,mask);
       
    }
};