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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        queue<TreeNode*> que ;
        vector<vector<int>> res;
        que.push(root);
        while(!que.empty()){
            int num = que.size();
            vector<int> temp;
            for(int i=0; i<num; i++){
                TreeNode *node = que.front();
                que.pop();
                temp.push_back(node->val);
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);       
            }
            res.push_back(temp);
        }
        return res;

    }
};
