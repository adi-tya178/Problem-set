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
   
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = 0;
        auto temp = head;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        if(n<k)
        {
           return head;
        }
         ListNode* cur=head;
        ListNode* nex;
        ListNode* pre=NULL;
        int counter=k;
        while(counter-- && cur!=NULL)
        {
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        if(head!=NULL) head->next=reverseKGroup(nex,k);
        return pre;
    }
};