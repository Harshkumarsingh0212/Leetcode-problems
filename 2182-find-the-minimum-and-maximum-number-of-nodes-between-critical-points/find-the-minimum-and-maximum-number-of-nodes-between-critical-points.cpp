/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* ptr=head;
        vector<int>ans;
        while(ptr!=NULL)
        {
            ans.push_back(ptr->val);
            ptr=ptr->next;
        }
        if(ans.size()<=3) return {-1,-1};
        vector<int>res;
        for(int i=1;i<ans.size()-1;i++)
        {
            if(ans[i]>ans[i-1] &&ans[i]>ans[i+1]) 
            {
                res.push_back(i);
            }
            if(ans[i]<ans[i-1] &&ans[i]<ans[i+1]) 
            {
                res.push_back(i);
            }
        }
    int mini = INT_MAX;

            for(int i = 1; i < res.size(); i++)
               {
                    mini = min(mini, res[i] - res[i-1]);
               }
       if(res.size()<2) return {-1,-1};
       
       else return {mini,res[res.size()-1]-res[0]};
    }
};