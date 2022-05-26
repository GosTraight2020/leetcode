class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> res;
        if(k == 0 || arr.size()==0) return {};
        for(int i=0; i<k; i++){
            heap.push(arr[i]);
        }

        for(int i=k; i<arr.size(); i++){
            if(arr[i] < heap.top()){
                heap.push(arr[i]);
                heap.pop();
            }
        }

        for(int i=0; i<k; i++){
            res.push_back(heap.top());
            heap.pop();
        }
        return res;
    }

private:
    priority_queue<int> heap;
};
