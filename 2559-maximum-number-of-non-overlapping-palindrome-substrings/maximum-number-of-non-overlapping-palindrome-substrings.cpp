class Solution {
    bool palindrome(string &s)
    {
        int l=0;
        int h=s.size()-1;
        while(l<=h)
        {
            if(s[l]!=s[h]) return  false;
            l++;
            h--;
        }
        return true;
    }
public:
    int maxPalindromes(string s, int k) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            
            for(int j=i+k-1;j<s.size()&& j<=i+k;j++)
            {
                 string temp = s.substr(i, j - i + 1);
                if(temp.size()>=k && palindrome(temp))
                {
                    count++;
                    i=j;
                    break;
                }
            }
        }
        return count;
    }
};