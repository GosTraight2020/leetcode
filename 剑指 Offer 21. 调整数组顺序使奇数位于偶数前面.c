class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        if(nums.size() == 0){
            return nums;
        }

        int i=0, j=nums.size()-1;
        while(i < j){
            while(i<j && (nums[i]&1)==1) i++;
            while(i<j && (nums[j]&1)==0) j--;
            swap(nums[i], nums[j]);
        }
        return nums;

    }

};




/*
   两个数组从两边向中间遍历
   左边的找偶数  右边找奇数
   找一次 换一次位置
*/
