class Solution {
    int product(int n)
    {
        int prod=1;
        while(n>0)
        {
            prod*=n%10;
            n/=10;
        }
        return prod;
    }
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++)
        {
            if(product(i)%t==0) return i;
        }
        return 0;
    }
};