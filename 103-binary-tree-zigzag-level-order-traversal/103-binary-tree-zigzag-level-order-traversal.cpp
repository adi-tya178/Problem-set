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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
        vector<vector<int>> res;
        stack<int> st;
        queue<TreeNode*> q;
        q.push(root);
        int i=1;
        while(!q.empty())
        {
            vector<int> v;
            int sz = q.size();
            i++;
            while(sz--)
            {
               auto top = q.front();
                q.pop();
                if(i%2==0)v.push_back(top->val);
                else
                {
                    st.push(top->val);
                }
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
            }
            while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
            res.push_back(v);
        }
        
        return res;
    }
    
};