class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long first=1LL*cost1*need1+1LL*cost2*need2;
        long long second=1LL*costBoth*max(need1,need2);
        long long common=min(need1,need2);
        long long res=1LL*costBoth*common+1LL*cost1*(need1-common)+1LL*cost2*(need2-common);
        return min(first,min(res,second));
    }
};