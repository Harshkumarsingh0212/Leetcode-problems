class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       
        unordered_map<int,int>mp;
        for(auto x:time) mp[x%60]++;
        long long count=0;
       for(auto x:mp)
       {
        if(x.first==0||x.first==30) count += 1LL * x.second * (x.second - 1) / 2;
        else if(mp.find(60-x.first)!=mp.end()&&x.first<30) count+=x.second*mp[60-x.first];
       }
       return count;
    }
};