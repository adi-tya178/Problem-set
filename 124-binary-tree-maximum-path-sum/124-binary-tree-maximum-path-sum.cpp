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
    int dfs(TreeNode *root,int &result)
    {
        if(root==NULL)return 0;
        int l = max(0,dfs(root->left,result));
        int r = max(0,dfs(root->right,result));
        int val = root->val;
        result = max(result,(l+r)+val);
        return max(l,r) + val;
        
    }
    int maxPathSum(TreeNode* root) {
        int result = INT_MIN;
        dfs(root,result);
        return result;
    }
};