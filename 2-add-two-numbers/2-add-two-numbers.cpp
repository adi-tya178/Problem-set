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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        auto head = res;
        
        int carry = 0;
        
        while(l1 || l2 || carry>0)
        {
            int val = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            
            head->next = new ListNode(val%10);
            carry = val/10;
            
            l1 = (l1?l1->next:NULL);
            l2 = (l2?l2->next:NULL);
            
            head=head->next;
        }
        return res->next;
    }
};