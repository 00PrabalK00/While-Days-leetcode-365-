/*1582. Special Positions in a Binary Matrix*/
#include <vector>

class Solution {
public:
    int numSpecial(std::vector<std::vector<int>>& arr) {
        int numRows = arr.size();
        int numCols = arr[0].size();
        int count = 0;

        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                if (arr[i][j] == 1) {
                    if (countOnesInRow(arr, i) == 1 && countOnesInColumn(arr, j) == 1) {
                        count++;
                    }
                }
            }
        }

        return count;
    }

    int countOnesInRow(const std::vector<std::vector<int>>& arr, int row) {
        return std::count(arr[row].begin(), arr[row].end(), 1);
    }

    int countOnesInColumn(const std::vector<std::vector<int>>& arr, int col) {
        int count = 0;
        for (const auto& row : arr) {
            count += row[col];
        }
        return count;
    }
};
/*

14 ms
13 MB*/