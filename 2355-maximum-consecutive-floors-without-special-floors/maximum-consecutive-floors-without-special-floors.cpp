class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
       int maxi=0;
       sort(special.begin(),special.end());
       for(int i=0;i<special.size()-1;i++)
       {
           int  diff=special[i+1]-special[i]-1;
           maxi=max(diff,maxi);
       }
       int first=special[0]-bottom;
       int second=top-special[special.size()-1];
       return max(maxi,max(first,second));
    }
};