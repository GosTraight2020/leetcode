class Solution {
public:
    vector<string> permutation(string s) {
        n = s.size();
        helper(s, 0);
        return vector<string>(uset.begin(), uset.end());
    }

private:
    unordered_set<string> uset;
    int n = 0;
    void helper(string &s, int begin){
        if(begin == n){
            uset.insert(s);
            return;
        }

        for(int i=begin; i<n; i++){
            swap(s[i], s[begin]);
            helper(s, begin+1);
            swap(s[i], s[begin]);
        }
    }
};
