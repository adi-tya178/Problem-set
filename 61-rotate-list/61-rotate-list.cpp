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
    int totalNode(ListNode* head)
    {
        int n=0;
        while(head)
        {
            head=head->next;
            n++;
        }
        return n;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return NULL;
        if(k==0)return head;
        auto fast = head,slow = head;
        int nodes = totalNode(head);
       k = k%nodes;
        ListNode* prev = NULL;
        int i=0;
        while(fast!=NULL)
        {
            if(i>k)
            {
                slow=slow->next;
            }
            prev = fast;
            fast=fast->next;
            i++;
            
        }
       
        if(slow==NULL)return head;
        else
        {
             //cout<<prev->val<<endl;
            prev->next = head;
            auto t = slow->next;
            slow->next = NULL;
            return t;
        }
        return NULL;
    }
};