class Solution{
public:
  int cuttingRope(int n){
      if(n <= 3) return n-1;
      int a = n/3, b = n%3;
      if(b == 0) return quick_pow(3, a) % Mod;
      else if(b == 1) return quick_pow(3, a-1) * 4 % Mod;
      else return quick_pow(3, a) * 2 % Mod;
  }
private:
  int Mod = 1000000007;
  long quick_pow(long base, long num){
      long res = 1;
      while(num != 0){
          if(num & 1) res = res *base % Mod;
          num >>= 1;
          base = base * base % Mod;
      }
    return res;
  }
};



#############################################################
1. 取模的题目要多想想， 每个可能溢出的地方都要取上
2. 注意int long longlong之间的关系
3. 快速幂模板
