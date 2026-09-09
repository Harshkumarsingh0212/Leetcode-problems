class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long ans=0;
        if(n>=1000 ) ans+= (min(n,9999LL)-1000+1);
        if(n>=10000 ) ans+=(min(99999LL,n)-10000+1);
        if(n>=100000 ) ans+=(min(n,999999LL)-100000+1);
        if(n>=1000000 ) ans+= 2LL*(min(n,9999999LL)-1000000+1);
        if(n>=10000000LL) ans+=2LL*(min(n,999999999LL)-10000000LL+1);
        if(n>=1000000000LL) ans+=3LL*(min(n,999999999999LL)-1000000000LL+1);
        if(n>=1000000000000LL) ans+=4LL*(min(n,999999999999999LL)-1000000000000LL+1);
        if(n>=1000000000000000LL) ans+=5LL*(n-1000000000000000LL+1);
        return ans;
    }
};