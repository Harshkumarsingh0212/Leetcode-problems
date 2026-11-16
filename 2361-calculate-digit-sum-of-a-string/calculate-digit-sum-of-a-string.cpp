class Solution {
public:
    string digitSum(string s, int k) {
    
        while(s.size()>k){
           
            int m=0;
            int n=s.size();
            string ans="";
          
            while(m<n){
                  int sum=0;
                   
                for(int i=0;i<k &&m<n;i++)
                {
                    sum+=s[m]-'0';
                    m++;
                }
               ans+=to_string(sum);
            
            }
            s=ans;

        }
        return s;
    }
};