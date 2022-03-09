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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return NULL;
       map<int,int> m;
        while(head)
        {
            m[head->val]++;
            head=head->next;
        }
        vector<int> v;
        for(auto x:m)
        {
            if(x.second==1)v.push_back(x.first);
        }
        if(v.size()==0)return NULL;
        ListNode* ans;
        ans = new ListNode(v[0]);
        auto ptr = ans;
        for(int i=1;i<v.size();i++)
        {
            ptr->next = new ListNode(v[i]);
            ptr = ptr->next;
        }
        return ans;
    }
};