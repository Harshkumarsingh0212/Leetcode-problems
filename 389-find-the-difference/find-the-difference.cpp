class Solution {
public:
    char findTheDifference(string s, string t) {
       string k=s+t;
       char ans=0;
       for(auto x:k)
       {
        ans^=x;
       }
         return ans;
    }
};