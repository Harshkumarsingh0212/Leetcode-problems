class Solution {
    void solve(int ind,string&temp,vector<string>&arr,set<int>&st)
    {
        if(temp.size()==3)
        {
            
            if(temp[0]!='0' &&(temp[2]-'0')%2==0) 
            {
                st.insert(stoi(temp));
            }
            return;
        }
        if(ind==arr.size()) return;
        for(int i=ind;i<arr.size();i++)
        {
            swap(arr[ind],arr[i]);
            temp+=arr[ind];
            solve(ind+1,temp,arr,st);
            temp.pop_back();
            swap(arr[ind],arr[i]);
        }

    }
public:
    int totalNumbers(vector<int>& digits) {
        vector<string>arr;
        for(auto x:digits) arr.push_back(to_string(x));
        set<int>st;
        string temp="";
        solve(0,temp,arr,st);
        return st.size();
    }
};