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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> res;
        if (n % 2 == 0) {
            return res;
        }
        if (n == 1) {
            res.push_back(new TreeNode(0));
            return res;
        }
        for (int i = 1; i < n; i += 2) {
            vector<TreeNode*> left_trees = allPossibleFBT(i);
            vector<TreeNode*> right_trees = allPossibleFBT(n - i - 1);
            for (auto left_tree : left_trees) {
                for (auto right_tree : right_trees) {
                    TreeNode* root = new TreeNode(0);
                    root->left = left_tree;
                    root->right = right_tree;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};