class Solution {
    void solve(int ind,int prev,vector<int>&temp,vector<int>&arr,set<vector<int>>&ans)
    {
        if(ind==arr.size())
        {
            if(temp.size()>=2){
            ans.insert(temp);
            }
            return;
        }
      solve(ind+1,prev,temp,arr,ans);
      if(prev==-1||arr[ind]>=arr[prev])
      {
        temp.push_back(arr[ind]);
        solve(ind+1,ind,temp,arr,ans);
        temp.pop_back();
      }
    }
  
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>ans;
        
        solve(0,-1,temp,nums,ans);
        vector<vector<int>>ans1(ans.begin(),ans.end());
        return ans1;
    }
};