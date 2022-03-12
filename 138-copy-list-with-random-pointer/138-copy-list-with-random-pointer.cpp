/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;
	Node *x = head, *tmp, *ans;
	while (x) {
		tmp = new Node(x->val);
		tmp->next = x->next;
		x->next = tmp;
		x = tmp->next;
	}
	x = head, ans = head->next;
	while (x) {
		if (x->random) x->next->random = x->random->next;
		x = x->next->next;
	}
	x = head;
	while (x) {
		tmp = x->next;
		x->next = tmp->next;
		if (tmp->next) tmp->next = tmp->next->next;
		x = x->next;
	}
	return ans;
    }
};