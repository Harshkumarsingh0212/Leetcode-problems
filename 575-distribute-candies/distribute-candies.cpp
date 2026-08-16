class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        set<int>st(candyType.begin(),candyType.end());
        int x=st.size();
        int mini=min(x,n/2);
return mini;
    }
};