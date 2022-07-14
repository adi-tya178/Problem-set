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
    TreeNode* helper(vector<int>& preorder, vector<int> &inorder,int &rootInd,int start,int end)
    {
        if(start>end)return NULL;
        int ind = 0;
        for(int i=start;i<=end;i++)
        {
            if(preorder[rootInd] == inorder[i])
            {
                ind = i;
                break;
            }
        }
        
        TreeNode* root = new TreeNode(inorder[ind]);
        rootInd++;
        root->left = helper(preorder,inorder,rootInd,start,ind-1);
        root->right = helper(preorder,inorder,rootInd,ind+1,end);
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int rootInd = 0;
        return helper(preorder,inorder,rootInd,0,n-1);
        
    }
};