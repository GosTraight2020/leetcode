/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

public:
    vector<int> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        queue<TreeNode*> que;
        vector<int> res;
        que.push(root);
        while(!que.empty()){
            int cur_num = que.size();
            for(int i=0; i<cur_num; i++){
                TreeNode* node = que.front();
                res.push_back(node->val);
                que.pop();
                if(node->left != nullptr)
                que.push(node->left);
                if(node->right != nullptr)
                que.push(node->right);
            }
        }
        return res;
    }
};
