class Solution {
    bool solve(vector<int>&arr,int k,int p)
    {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%p==0) count++;
           if(count>k) return false;
        }
        return true;
    }
public:
    int countDistinct(vector<int>& nums, int k, int p) {
       set<vector<int>>st;
        for(int i=0;i<nums.size();i++)
        {
            vector<int>temp;
            for(int j=i;j<nums.size();j++)
            {
                 temp.push_back(nums[j]); 
                 if(solve(temp,k,p))
                st.insert(temp);
            }
            
        }
        return st.size();
    }
};