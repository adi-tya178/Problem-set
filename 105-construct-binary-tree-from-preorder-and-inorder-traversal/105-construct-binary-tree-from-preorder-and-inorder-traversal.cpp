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
    TreeNode* helper(vector<int> &preorder, vector<int> &inorder,int &rootInd, int left, int right)
    {
        if(left > right)return NULL;
        
        int ind;
        for(int i=left;i<=right;i++)
        {
            if(preorder[rootInd] == inorder[i])
            {
                ind = i;
                break;
            }
        }
        rootInd++;
        TreeNode* root = new TreeNode(inorder[ind]);
        
        root->left = helper(preorder,inorder,rootInd,left, ind-1);
        root->right = helper(preorder,inorder,rootInd,ind+1,right);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int rootInd = 0;
        return helper(preorder,inorder,rootInd,0,n-1);
    }
};