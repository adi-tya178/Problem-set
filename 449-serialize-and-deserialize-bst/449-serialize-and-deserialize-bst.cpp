/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
         if(!root)return "";
        string res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
           
        
                TreeNode* curr = q.front();
                q.pop();
                if(curr==NULL)res.append("#,");
                else
                {
                    res.append(to_string(curr->val)+',');
                }
                if(curr)
                {
                    q.push(curr->left);
                    q.push(curr->right);
                }
        
        }
        res.pop_back();
        cout<<res<<endl;
        return res;
        
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.length()==0)return NULL;
        stringstream s(data);
        string str;
        getline(s, str, ',');
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();
            
            getline(s, str, ',');
            if(str=="#")
            {
                curr->left = NULL;
            }
            else
            {
                TreeNode* leftNode = new TreeNode(stoi(str));
                curr->left = leftNode;
                q.push(leftNode);
            }
            
            
            getline(s, str, ',');
            if(str=="#")
            {
                curr->right = NULL;
            }
            else
            {
                TreeNode* rightNode = new TreeNode(stoi(str));
                curr->right = rightNode;
                q.push(rightNode);
            }
        }
        return root;
        
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;