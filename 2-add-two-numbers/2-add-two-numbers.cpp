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
        ListNode* head = new ListNode(0);
        auto result = head;
        int carry = 0;
        while(l1 || l2 || carry>0)
        {
            int resval = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            
            result->next = new ListNode(resval%10);
            
            carry = resval/10;
            
            l1 = (l1?l1->next:NULL);
            l2 = (l2?l2->next:NULL);
            result = result->next;
        }
        
        return head->next;
        
    }
};