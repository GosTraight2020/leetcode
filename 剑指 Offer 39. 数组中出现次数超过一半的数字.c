class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = -1;
        for(int i=0; i<nums.size(); i++){
            if(count == 0) candidate = i;
            if(nums[i] == nums[candidate]){
                count ++;
            }else{
                count --;
            }
        }
        return nums[candidate];
    }
};

// ########################################################################

