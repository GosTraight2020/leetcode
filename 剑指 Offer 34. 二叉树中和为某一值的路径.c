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
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        int sum = 0;
        vector<int> path; 
        traversal(target,path, sum, root);
        return ans;
    }
    void traversal(int target, vector<int> path, int sum, TreeNode *root){
        if(root == NULL){
            return;
        }
        if(sum+root->val == target && root->left == NULL && root->right == NULL){
            path.emplace_back(root->val);
            ans.push_back(path);
            return;
        }
        sum = sum + root->val;

        path.emplace_back(root->val);
        traversal(target, path, sum, root->left);
        traversal(target, path, sum, root->right);

    }
};


//##############################################################################################
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        if(root == NULL) return {};
        vector<int> path; 
        traversal(root, target);
        return ans;
    }
    void traversal(TreeNode *root, int target){
        if(root == NULL){
            return;
        }
        path.emplace_back(root->val);
        if(target - root->val == 0 && root->left ==NULL && root->right ==NULL){
            ans.emplace_back(path);
        }
        traversal(root->left, target-(root->val));
        traversal(root->right, target-(root->val));
        path.pop_back();
    }
};
