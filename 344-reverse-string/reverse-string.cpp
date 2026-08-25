class Solution {
    void solve(int l,int h,vector<char>&s)
    {
        if(l>=h) return;
       swap(s[l],s[h]);
       solve(l+1,h-1,s);
    }
public:
    void reverseString(vector<char>& s) {
     int l=0;
     int h=s.size()-1;
     solve(l,h,s);

    }
};