class Solution {

public:
    int findMinFibonacciNumbers(int k) {
        int ans=k;
        int count=0;
        vector<int>arr;
          int a=1;
        int b=1;
        while(a<=k)
        {
            arr.push_back(a);
            int c=a+b;
            a=b;
            b=c;
         
        }
        while(ans>0){
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]<=ans) 
            {
                ans-=arr[i];
               count++;
               break;
            }
        }
        }
        return count;
    }
};