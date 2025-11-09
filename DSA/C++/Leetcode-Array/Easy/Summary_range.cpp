#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> SummaryRange(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<std::string> result;    

    for (int i = 0; i < n; i++) {
        int start = nums[i];
        while (i + 1 < n && nums[i] + 1 == nums[i + 1]) {
            i++;
        }
        int end = nums[i];

        if (start == end) {
            result.push_back(std::to_string(start));
        } else {
            result.push_back(std::to_string(start) + "->" + std::to_string(end));
        }
    }
    //
    return result;
}

int main() {
    std::vector<int> nums = {0,2,3,4,6,8,9};
    std::vector<std::string> ans = SummaryRange(nums);

    for (auto &r : ans) {
        std::cout << r << " ";
    }
    std::cout << std::endl;

    return 0;
}
