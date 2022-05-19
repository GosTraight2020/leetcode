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
    TreeNode* mirrorTree(TreeNode* root) {
        if(root == nullptr){
            return nullptr;
        }
        TreeNode *left = mirrorTree(root->left);
        TreeNode *right = mirrorTree(root->right);
        root->right = left;
        root->left = right;
        return root;
    }

};
