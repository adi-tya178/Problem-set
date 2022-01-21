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
    void helper(TreeNode* root,int &total,int sum)
    {
        if(!root)return ;
        sum = sum*10 + root->val;
        if(!root->left && !root->right)
        {
            total+=sum;
            sum=0;
        }
       helper(root->left,total,sum);
        helper(root->right,total,sum);
    }
    int sumNumbers(TreeNode* root) {
        if(!root)return 0;
        int ans = 0,sum=0;
        helper(root,ans,sum);
        return ans;
        
    }
};