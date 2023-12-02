#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_indices;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (num_indices.find(complement) != num_indices.end()) {
            return {num_indices[complement], i};
        }
        num_indices[nums[i]] = i;
    }
    return {};
}

//has a better time complexity but a worse space complexity