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
    bool helper(TreeNode* root, TreeNode* &prev)
    {
        if(!root)return true;
        if(!helper(root->left,prev))return 0;
        if(prev && root->val<=prev->val)return 0;
        prev = root;
        
        return helper(root->right,prev);
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return helper(root,prev);
    }
};