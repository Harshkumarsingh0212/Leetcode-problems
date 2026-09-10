class Solution {
    void solve(int n,char prev,int k,string&temp)
    {
        if(n==0){ temp+=prev; return; }
        int half=1<<(n-1);
        if(k<=half) solve(n-1,prev,k,temp);
        else if(prev=='0') solve(n-1,'1',k-half,temp);
        else solve(n-1,'0',k-half,temp);
    }
public:
    int kthGrammar(int n, int k) {
        string t="";
        solve(n-1,'0',k,t);
       if(t[0]=='1') return 1;
       else return 0;
    }
};