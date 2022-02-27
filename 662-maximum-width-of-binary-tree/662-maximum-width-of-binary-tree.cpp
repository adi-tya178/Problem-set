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
#define ll uint64_t
class Solution {
public:
  
    int widthOfBinaryTree(TreeNode* root) {
      if(root==NULL)return 0; 
        ll c=0;
        ll maxwidth = 0;
        
        queue<pair<TreeNode*,ll>> q;
        q.push({root,0});
        while(!q.empty())
        {
            ll n = q.size();
           ll a = q.front().second;
            ll b = q.back().second;
            maxwidth = max(maxwidth,b-a+1);
            
            while(n--)
            {
               auto p = q.front();
                q.pop();
                ll ind = p.second;
                if(p.first->left) q.push({p.first->left,2*ind+1});
                if(p.first->right)q.push({p.first->right,2*ind+2});
            }
        }
        return maxwidth;
        
    }
};