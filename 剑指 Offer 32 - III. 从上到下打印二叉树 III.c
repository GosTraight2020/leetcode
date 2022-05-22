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
        queue<TreeNode*> que;
        vector<vector<int>> res;
        que.push(root);
        int cout = 0;
        while(!que.empty()){
            int num = que.size();
            deque<int> temp;
            for(int i=0; i<num;i++){
                TreeNode *node = que.front();
                que.pop();
                if(cout % 2 == 0){
                    temp.push_back(node->val);
                }else{
                    temp.push_front(node->val);
                }
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
            res.emplace_back(vector<int>{temp.begin(), temp.end()});
            cout ++;
        }
        return res;
    }
};

#vector.emplace_back(vector<int>{xx.begin(), xx.end()});
#deque.push_back();
#deque.push_front();
