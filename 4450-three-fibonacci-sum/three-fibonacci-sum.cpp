class Solution {
    
public:
    bool threeFibonacciSum(int n) {
    long long a=0,b=1;
    while(a<=1e9)
    {
        long long c=a+b;
       if(a+b+c==n) return true;
        a=b;
        b=c;
    }
        return false;

    }
};