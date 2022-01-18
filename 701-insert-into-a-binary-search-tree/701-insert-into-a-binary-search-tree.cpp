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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)return root=new TreeNode(val);
        
        auto node = root;
        
        while(node)
        {
            if(val>node->val)
            {
                if(node->right==NULL)node->right = new TreeNode(val);
                else{node=node->right;}
            }
            else if(val<node->val)
            {
                if(node->left==NULL)node->left = new TreeNode(val);
                else{node=node->left;}
            }
           else if(val==node->val)
            {
                return root;
            }
        }
        return root;
    }
};