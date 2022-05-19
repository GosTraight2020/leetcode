class Solution {
private:
    static constexpr int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if(matrix.size() == 0 || matrix[0].size() == 0) return {};
        int row = matrix.size();
        int col = matrix[0].size();
        int num = row * col;
        int dir_index = 0;
        vector<vector<bool>> flag(row, vector<bool>(col, false));
        vector<int> res(num);
        int i=0, j=0;
        for(int k=0; k<num; k++){
            res[k] = matrix[i][j];
            flag[i][j] = true;
            int next_i = i + directions[dir_index][0];
            int next_j = j + directions[dir_index][1];
            if(next_i>=row || next_j>=col || next_i<0 || next_j<0 || flag[next_i][next_j]){
                dir_index = (dir_index+1) % 4;
            }
            i = i + directions[dir_index][0];
            j = j + directions[dir_index][1];
        }

        return res;

    }
};
