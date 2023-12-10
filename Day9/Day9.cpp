/*867. Transpose Matrix*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> result(col, vector<int>(row, 0));
        
        for (int i = 0; i < col; ++i) {
            for (int j = 0; j < row; ++j) {
                result[i][j] = matrix[j][i];
            }
        }
        
        return result;
    }
};

/*Runtime
Details
10ms
Beats 52.49%of users with C++
Memory
Details
10.97MB
Beats 45.29%of users with C++*/