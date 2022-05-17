class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> vec;
        long number = pow(10, n);
        for (int i=1; i<number; i++){
            vec.push_back(i);
        }   
        return vec;
    }

    int pow(int n, int p){
        int res = 1;
        while(p){
            if(p & 1) res *= n;
            n = n * n;
            p>>=1;
        }
        return res;
    }
};
