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
    struct cmp {
    bool operator()(const ListNode* l, const ListNode* r) {
        return l->val > r->val;
    }
};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp> q;
        
        for(auto l:lists)
        {
            if(l)q.push(l);
        }
        if(q.empty())return NULL;
        
        auto res = q.top();
        q.pop();
        if(res->next)q.push(res->next);
        auto tail = res;
        while(!q.empty())
        {
            tail->next = q.top();
            q.pop();
            tail = tail->next;
            if(tail->next)q.push(tail->next);
        }
        
        return res;
    }
};