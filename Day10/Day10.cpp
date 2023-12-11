/*1287. Element Appearing More Than 25% In Sorted Array*/
include <vector>

class Solution {
public:
    int findSpecialInteger(std::vector<int>& arr) {
        int size = arr.size();
        int last = arr[0];
        int count = 1;
        if (size == 1) {
            return arr[0];
        }
        for (int i = 1; i < size; i++) {
            if (last == arr[i]) {
                count++;
                float a = static_cast<float>(count) / size;
                if (count*4>size) {
                    return arr[i];
                }
            } else {
                count = 1;
                last = arr[i];
            }
        }
        return -1;
    }
};
/*Runtime
Details
6ms
Beats 92.41%of users with C++
Memory
Details
12.88MB
Beats 57.06%of users with C++*/