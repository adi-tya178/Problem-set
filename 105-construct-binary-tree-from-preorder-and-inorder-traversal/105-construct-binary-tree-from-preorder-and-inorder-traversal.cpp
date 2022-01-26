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
    TreeNode* helper(vector<int>&preorder,vector<int> &inorder,int &rootidx,int left,int right)
    {
       if(left>right)return NULL;
        int p=0;
        while(inorder[p]!=preorder[rootidx])p++;
        rootidx++;
        TreeNode* newnode = new TreeNode(inorder[p]);
        newnode->left = helper(preorder,inorder,rootidx,left,p-1);
        newnode->right = helper(preorder,inorder,rootidx,p+1,right);
        
        return newnode;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootidx=0;
        return helper(preorder,inorder,rootidx,0,inorder.size()-1);
        
    }
};