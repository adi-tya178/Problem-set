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
    void inorder(TreeNode* root,TreeNode* &ans,TreeNode* &pre)
    {
        if(!root)return ;
        inorder(root->left,ans,pre);
        if(ans==NULL)ans = root;
        else
        {
            pre->right = root;
           
        }
        pre = root;
        root->left = NULL;
        inorder(root->right,ans,pre);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans = NULL;
        auto ptr = ans;
        inorder(root,ans,ptr);
        return ans;
    }
};