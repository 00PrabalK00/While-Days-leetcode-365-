class Solution {
public:
    bool isPalindrome(int x) {
        int arr[20];
        int count = 0;
        
        if (x < 0) {
            return false;
        } else {
            while (x != 0) {
                int y = x % 10;
                x = x / 10; 
                arr[count] = y;  
                count++;
            }
            
            int size = count; 

            for (int i = 0; i < size / 2; i++) {
                if (arr[i] != arr[size - 1 - i]) {
                    return false; 
                }
            }
            
            return true;
        }
    }
};
/*Runtime
Details
7ms
Beats 72.04%of users with C++
Memory
Details
6.26MB
Beats 74.82%of users with C++*/


