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
    ListNode* sortList(ListNode* head) {
        if(!head) return NULL;
        vector<int> l;
        while(head)
        {
            l.push_back(head->val);
            head=head->next;
        }
        sort(l.begin(),l.end());
        ListNode* ans = new ListNode(l[0]);
        auto ptr = ans;
        for(int i=1;i<l.size();i++)
        {
            ptr->next = new ListNode(l[i]);
            ptr=ptr->next;
        }
        return ans;
    }
};