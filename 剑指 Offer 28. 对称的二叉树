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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return compare(root->left, root->right);
    }

    bool compare(TreeNode* A, TreeNode *B){
        if(A == nullptr && B == nullptr) return true;
        if(A == nullptr || B == nullptr) return false;
        if(A->val == B->val && compare(A->right, B->left) && compare(A->left, B->right))
            return true;
        else return false;
    }
};
