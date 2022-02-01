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
    int helper(ListNode* node)
    {
        auto head = node;
        int count = 0;
        while(head)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return head;
        int count = helper(head);
        k = k%count;
        auto slow = head;
        auto fast = head;
        ListNode* prev = NULL;
        int i=0;
        while(fast!=NULL)
        {
            if(i>k)
            {
                slow = slow->next;
            }
            prev = fast;
            fast=fast->next;
            i++;
        }
        if(slow==NULL)
        {
            return head;
        }
        else
        {
            prev->next = head;
            auto t=slow->next;
            slow->next=NULL;
            return t;
        }
        
        return NULL;
        
    }
};