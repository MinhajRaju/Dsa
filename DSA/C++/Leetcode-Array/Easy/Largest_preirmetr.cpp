#include <iostream>
#include <vector>
#include <algorithm>

int largestPerimeter(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());

    for (int i = nums.size() - 1; i >= 2; i--) {
        if (nums[i] < nums[i-1] + nums[i-2]) {
            return nums[i] + nums[i-1] + nums[i-2];
        }
    }

    return 0;
}

int main() {
    std::vector<int> nums = {3, 6, 2, 3};
    int res = largestPerimeter(nums);
    std::cout << res; 
}
