#include <iostream>
#include <vector>

std::vector<bool> prefixDivby5(std::vector<int>& nums) {

    std::vector<bool> ans;
    int current = 0;

    for(int bit : nums){
        current = (current * 2 + bit) % 5;
        ans.push_back(current == 0);
    }

    return ans;
}

int main() {

    std::vector<int> nums = {0,1,1};
    std::vector<bool> res = prefixDivby5(nums);

    for(bool x : res){
        std::cout << x << std::endl;
    }

    return 0;
}
