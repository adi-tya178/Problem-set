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
    TreeNode* helper(vector<int> inorder,vector<int> preorder,int start,int end,int &ind)
    {
        if(start>end)return NULL;
        int i=0;
        while(inorder[i]!=preorder[ind])
        {
            i++;
        }
        ind++;
        TreeNode* root = new TreeNode(inorder[i]);
        root->left = helper(inorder,preorder,start,i-1,ind);
        root->right = helper(inorder,preorder,i+1,end,ind);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder;
        inorder = preorder;
        sort(inorder.begin(),inorder.end());
        int n = inorder.size();
        int ind = 0;
        TreeNode* root = helper(inorder,preorder,0,n-1,ind);
        return root;
        
    }
};