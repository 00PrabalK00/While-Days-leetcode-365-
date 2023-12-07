
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int maxOdd = -1;
        int index = -1;
        for (int i = num.length() - 1; i >= 0; i--) {
            int x = num[i] - '0';
            if (x % 2 != 0) {
                maxOdd = x;
                index = i;
                break;
            }
        }
        if (index != -1) {
            return num.substr(0, index + 1);
        }
        return "";
    }
};

/*Runtime
Details
30ms
Beats 54.86%of users with C++
Memory
Details
15.30MB
Beats 58.43%of users with C++*/