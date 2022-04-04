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
    ListNode* swapNodes(ListNode* head, int k) {
        
        auto node = head;
       auto ptr = head;
        int n = 0;
        int t = k;
        while(node)
        {
            t--;
            if(t==0)
            {
                ptr = node;
            }
          n++;
            node=node->next;
        }
        node = head;
        int temp = n - k;
        while(temp--)
        {
           node = node->next;
        }
        swap(ptr->val,node->val);
        return head;
        
    }
};