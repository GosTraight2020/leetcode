class Solution {
private:
    stack<int> _stack;
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if(pushed.size() != popped.size()) return false;
        int num = pushed.size();
        int j = 0;
        for(int i=0; i<num; i++){
            _stack.push(pushed[i]);
            while(!_stack.empty() && _stack.top() == popped[j]){
                _stack.pop();
                j++;
            }
        }
        if(!_stack.empty()){
            return false;
        }else{
            return true;
        }
    }
};
