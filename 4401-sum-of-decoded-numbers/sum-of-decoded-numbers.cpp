class Solution {
long long power(long long base, long long exp)
{
    long long ans = 1;
    while(exp > 0)
    {
        if(exp % 2)
            ans = (__int128)ans * base % 1000000007;
        base = (__int128)base * base % 1000000007;
        exp /= 2;
    }
    return ans;
}
    int len(long long n)
    {
          if(n == 0) return 1;
        int count=0;
        while(n>0)
        {
            count++;
          n/=10;
        }
        return count;
    }
    long long solve(long long n)
    {
        int w=n%10;
         long long d=n/10;
         int leng=len(d);
         int div=power(10,leng-w);
         
         int x=d/div;
         int y=d%div;
         return power(x,y);
    }
public:
    int sumDecoded(vector<long long>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=solve(nums[i]);
        }
        return sum%1000000007;
    }
};