class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
           vector<int> ans;
        for(int i=0;i<s.size();i++)
        {
            int startPoss=startPos[0];
            int startPos1=startPos[1];
            int count=0;
            int j=i;
            while(j<s.size())
            {
                if(s[j]=='R'&& startPos1+1<n)
                {
                    count++;
                    startPos1++;
                }else if(s[j]=='L'&& startPos1-1>=0)
                {
                    count++;
                    startPos1--;
                }
                else if(s[j]=='U'&& startPoss-1>=0)
                {
                    count++;
                    startPoss--;
                }
                else if(s[j]=='D' && startPoss+1<n)
                {
                    count++;
                    startPoss++;
                }else
                {
                    break;
                }
                j++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};