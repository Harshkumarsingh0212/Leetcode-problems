class Solution {
public:
    bool isPalindromic(string s) {
        string res="";
        for(int i=0;i<s.size();i++)
        {
            int x=s[i];
            string temp="";
            while(x>0)
            {
               temp += char('0' + x % 2);
               x/=2;
            }
            reverse(temp.begin(),temp.end());
           
            while(temp.size() < 8)
            temp = "0" + temp;
             res+=temp;
        }
        
        int l=0;
        int h=res.size()-1;
        while(l<=h)
        {
            if(res[l]!=res[h]) return false;
            l++;
            h--;
        }
        return true;
    }
};