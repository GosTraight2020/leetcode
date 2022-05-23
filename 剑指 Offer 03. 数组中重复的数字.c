class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()){
            if(nums[i] == i){
                i++;
            }else{
                if(nums[i] == nums[nums[i]]){
                    return nums[i];
                }else{
                    swap(nums[i], nums[nums[i]]);
                }
            }
        } 
        return i;
    
    }
};

//#######################################################
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
       unordered_map<int, bool> map;      
       for(int i=0; i<nums.size(); i++){
           if(map[nums[i]]){
               return nums[i];
           }else{
               map[nums[i]]=1;
           }
       }
       return 0;
    
    }
};
