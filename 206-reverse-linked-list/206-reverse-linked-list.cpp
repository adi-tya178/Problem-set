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
    ListNode* reverseList(ListNode* head) {
        ListNode* node = head;
        ListNode* pre = NULL;
        ListNode* nex = NULL;
        
        while(node!=NULL)
        {
            nex = node->next;
            node->next = pre;
            pre = node;
            node = nex;
        }
        return pre;
    }
};