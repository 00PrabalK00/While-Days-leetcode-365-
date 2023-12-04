#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string ret = "";

        for (int i = 0; i < num.length() - 2; ++i) {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
                if (num.substr(i, 3) > ret) {
                    ret = num.substr(i, 3);
                }
            }
        }

        return ret;
    }
};
/*Runtime
Details
0ms
Beats 100.00%of users with C++
Memory
Details
6.78MB
Beats 91.88%of users with C++*/