class Solution {
public:
    int maxDepth(string s) {
        int c1 = 0;
        int c2 = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                c1++;
                c2 = max(c1, c2);
            }
            else if (s[i] == ')') {
                c1--;
            }
        }
        return c2;
    }
};