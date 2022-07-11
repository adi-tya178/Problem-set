/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* head) {
        vector<int> v;
       if(head==NULL)return {};
        queue<TreeNode*> q;
        q.push(head);
        int temp=0,flag;
        //v.push_back(head->val);
        while(q.empty()==false)
        {
            temp=q.size();
            flag=q.size();
            while(temp)
            {
                TreeNode* node = q.front();
                q.pop();
                if(temp==flag)v.push_back(node->val);
                if(node->right)q.push(node->right);
                 if(node->left)q.push(node->left);
                temp--;
            }
        }
        return v;
    }
};