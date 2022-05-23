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
private:
    unordered_map<int, int> map;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int num = preorder.size();
        if(num == 0) return NULL;
        for(int i=0; i<num; i++){
            map[inorder[i]] = i;
        }
        return traversal(preorder, inorder, 0, num-1, 0, num-1);
    }

    TreeNode* traversal(vector<int>& preorder, vector<int>& inorder, int inorder_left, int inorder_right, int preorder_left, int preorder_right ){
        if(inorder_left > inorder_right) return NULL;
        int preorder_root = preorder_left;
        int inorder_root = map[preorder[preorder_root]];
        int size_left = inorder_root - inorder_left;
        TreeNode *root = new TreeNode(inorder[inorder_root]);
        root->left = traversal(preorder, inorder, inorder_left, inorder_root-1, preorder_root+1, preorder_root+size_left);
        root->right = traversal(preorder,inorder, inorder_root+1, inorder_right, preorder_root+size_left+1,  preorder_right);
        return root;
    }
};
