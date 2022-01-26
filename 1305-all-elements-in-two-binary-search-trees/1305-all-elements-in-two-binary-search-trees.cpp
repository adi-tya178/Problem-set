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
    void inorder(TreeNode* A,vector<int> &v)
    {
        if(!A)return ;
        inorder(A->left,v);
        v.push_back(A->val);
        inorder(A->right,v);
    }
    vector<int> getAllElements(TreeNode* A, TreeNode* B) {
        vector<int> v;
        inorder(A,v);
        inorder(B,v);
        sort(v.begin(),v.end());
        return v;
    }
};