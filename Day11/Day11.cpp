/*1464. Maximum Product of Two Elements in an Array*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int num : nums) {
            if (num >= max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};
/*Runtime
Details
3ms
Beats 82.74%of users with C++
Memory
Details
10.28MB
Beats 62.52%of users with C++*/