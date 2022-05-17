/*
  利用 n & (n-1)的性质
  5 = 101b
  4 = 100b
  5 & 4 = 100b 消去了最后一位1
  3 = 011b
  4 & 3 = 0 消去了最后一位1
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while(n){
            res ++;
            n = n&(n-1);
        }
        return res;
    }
};

/*
  通过循环比较二进制串的最后一位 不断将数字进行右移来统计
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while(n)
        {
            if(n & 1) res ++;
            n = n >> 1;
        }
        return res;
    }
};
