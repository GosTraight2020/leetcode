class Solution {
private:
    /* 在左闭右开区间[left, right)，构造二叉树 */
    TreeNode* traversal(vector<int>& nums, int left, int right) {
        /* 递归截止条件 */
        if (left >= right) return NULL;

        /* 求取分割点下标：maxValueIndex */
        int maxValueIndex = left;// 赋值很巧妙可以更新 新数组的起点
        for (int i = left + 1; i < right; i++)
            if (nums[i] > nums[maxValueIndex]) maxValueIndex = i;

        /* 更新节点最大值 */
        TreeNode* root = new TreeNode(nums[maxValueIndex]);
        /* 左闭右开：[left, maxValueIndex) */
        root->left = traversal(nums, left, maxValueIndex);
        /* 左闭右开：[maxValueIndex + 1, right)*/
        root->right = traversal(nums, maxValueIndex + 1, right);

        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        return traversal(nums, 0, nums.size());
    }
};
