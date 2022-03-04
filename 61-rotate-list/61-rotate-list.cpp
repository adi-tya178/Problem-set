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
    int count(ListNode* root)
    {
        int c=0;
        while(root)
        {
            c++;
            root=root->next;
        }
        return c;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return head;
        int n = count(head);
        k = k%n;
        int t = n - k;
        auto slow = head;
        auto fast = head;
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