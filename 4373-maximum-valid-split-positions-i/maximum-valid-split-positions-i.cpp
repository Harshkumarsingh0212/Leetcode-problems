class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();
        vector<int>prefixgcd(n);
        vector<int>suffixgcd(n);
        prefixgcd[0]=nums[0];
        suffixgcd[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
          prefixgcd[i]=__gcd(prefixgcd[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            suffixgcd[i]=__gcd(suffixgcd[i+1],nums[i]);
        }
        int score=0;
        for(int i=0;i<n-1;i++)
       {
        if(prefixgcd[i]==suffixgcd[i+1]) score++;
        
       }
         for(int i=0;i<nums.size();i++)
        {
            vector<int>temp;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j) continue;
                temp.push_back(nums[j]);
            }  

        int n=temp.size();
        vector<int>prefixgcd(n);
        vector<int>suffixgcd(n);
        prefixgcd[0]=temp[0];
        suffixgcd[n-1]=temp[n-1];
        for(int i=1;i<n;i++)
        {
          prefixgcd[i]=__gcd(prefixgcd[i-1],temp[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            suffixgcd[i]=__gcd(suffixgcd[i+1],temp[i]);
        }
        int score=0;
       for(int i=0;i<n-1;i++)
       {
        if(prefixgcd[i]==suffixgcd[i+1]) score++;
        
       }
            maxi=max(maxi,score);
            }
        return max(maxi,score);
    }
};