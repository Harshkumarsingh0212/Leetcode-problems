class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        map<char, int> mp;

        for(char c : s)
            mp[c]++;

        string ans = "";

        while(!mp.empty()) {
            auto it = prev(mp.end());

            int take = min(repeatLimit, it->second);

            ans += string(take, it->first);
            it->second -= take;

            if(it->second == 0)
                mp.erase(it);
            else {
                if(mp.size() == 1)
                    break;

                auto temp = prev(it);
                ans += temp->first;
                temp->second--;

                if(temp->second == 0)
                    mp.erase(temp);
            }
        }

        return ans;
    }
};