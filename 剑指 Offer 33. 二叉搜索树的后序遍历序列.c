class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        return traversal(postorder, 0, postorder.size()-1);
    }

    bool traversal(vector<int>& postorder, int start, int end){
        if(start >= end) return true;
        int index = start;
        while(postorder[index] < postorder[end]) index++;
        int middle = index;
        while(postorder[index] > postorder[end]) index++;
        bool left = traversal(postorder, start, middle-1);
        bool right = traversal(postorder, middle, end-1);
        return index == end && left && right;
    }
};
